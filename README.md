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

1. test one executable:

   ```sh
   tests/test
   ```

1. test specific test case:

   ```sh
   tests/test "factorial test #2"
   ```

   or test specific tag:

   ```sh
   tests/test --list-tags
   tests/test \[one]
   ```

## CMake

- `./src/CMakeLists.txt` includes files as lib:

  ```txt
  add_library(fct factorial.cpp)  # lib name: fct
  add_library(bnm binomial.cpp)   # lib name: bnm
  ```

- `./tests/CMakeLists.txt` adds executable and links libs (works for multiple executables with their libraries):

  ```txt
  add_executable(
    test # name of the executable
    test_factorial.cpp
    test_binomial.cpp
  )

  target_link_libraries(
    test # linking libraries from `src/CMakeLists.txt`
    fct
    bnm
    Catch2::Catch2WithMain
  )
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
