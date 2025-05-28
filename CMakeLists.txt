cmake_minimum_required(VERSION 3.14)
project(file_indexer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library
add_subdirectory(src)

# Enable testing
enable_testing()
add_subdirectory(tests)
