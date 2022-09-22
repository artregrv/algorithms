cmake_minimum_required(VERSION 2.6)

# locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# link tests wit what we want to test and the GTest and pthread
add_executable(tests tests.cpp)
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)
