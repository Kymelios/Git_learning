cmake_minimum_required(VERSION 3.10)
project(CUnitTesting C)

enable_testing()

# Create main executable
add_executable(main main.c function.c)

# Create unit test executable
add_executable(unit_test1 test1.c function.c)
add_executable(unit_test2 test2.c function.c)

# Adding tests
add_test(NAME UnitTest1 COMMAND unit_test1)
add_test(NAME UnitTest2 COMMAND unit_test2)