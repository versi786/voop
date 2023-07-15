.PHONY: all
all: install generate build

.PHONY: install
install:
	conan install . --output-folder=build --build=missing

.PHONY: generate
generate:
	cmake -B ./build -S ./src -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -G Ninja

.PHONY: build
build:
	cmake --build ./build

.PHONY: test
test: build
	cd ./build && ctest $(ARGS)

.PHONY: clean
clean:
	rm -rf ./build
