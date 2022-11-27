
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

# These tests need their own main
# add_executable(custom-main-tests test.cpp test-main.cpp)
# target_link_libraries(custom-main-tests PRIVATE Catch2::Catch2)
