# Cache2 Template

## Installation

- MacOS: `brew install catch2`

- Ubuntu: `sudo apt install catch2`

## Usage

1. build:

   ```sh
   cd build
   cmake ..
   make
   ```

1. test:

   ```sh
   tests/test
   ```

1. test specific test case:

   ```sh
   tests/test "test case #2"
   ```

1. test specific tag (`\` in front of tags' `[` is required while using `zsh`):

   ```sh
   tests/test --list-tags
   tests/test \[one]
   ```

## CMake

- `./src/CMakeLists.txt` includes files as lib:

  ```txt
  add_library(fct factorial.cpp)
  ```

- `./tests/CMakeLists.txt` adds executable and links libs:

  ```txt
  add_executable(test test_factorial.cpp)
  target_link_libraries(test fct Catch2::Catch2WithMain)
  ```

- `./CMakeLists.txt` main file:

  ```txt
  cmake_minimum_required(VERSION 3.10)

  project(Catch2Template LANGUAGES CXX VERSION 0.0.1)

  find_package(Catch2 REQUIRED)

  include_directories(include)

  add_subdirectory(src)
  add_subdirectory(tests)
  ```

## References

- [Catch2 tutorial](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md)

- [Catch2 command line](https://github.com/catchorg/Catch2/blob/devel/docs/command-line.md)

- [bsubercaseaux/MajorityQueries](https://github.com/bsubercaseaux/MajorityQueries)
