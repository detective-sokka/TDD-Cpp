add_library(file_indexer
    Indexer.cpp
)

target_include_directories(file_indexer PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

message(STATUS "Include path: ${CMAKE_CURRENT_SOURCE_DIR}/../include")
