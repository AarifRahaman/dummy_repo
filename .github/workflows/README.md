# hello-cpp-ci

Minimal C++ “Hello World” with:
- CMake build + CTest unit test
- Linting: `clang-format` and `cppcheck`
- Doxygen docs auto-published to GitHub Pages
- GitHub Actions CI

## Build locally (Windows / MSYS2 MinGW64)

```bash
# MSYS2 shell (UCRT64 or MINGW64):
pacman -S --needed mingw-w64-ucrt-x86_64-toolchain cmake doxygen graphviz clang-format cppcheck

cmake -S . -B build -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build build -- -j

# Run
./build/hello
./build/hello Arifur

# Tests
ctest --test-dir build --output-on-failure

#There is a change for practising new feature branch.
