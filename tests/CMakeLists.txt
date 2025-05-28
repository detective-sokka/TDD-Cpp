include(FetchContent)

# Download GTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(test_indexer test_indexer.cpp)

# Link GTest and your library
target_link_libraries(test_indexer
    gtest_main
    file_indexer
)

include(GoogleTest)
gtest_discover_tests(test_indexer)
