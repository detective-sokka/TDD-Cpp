#include <gtest/gtest.h>
#include "file_indexer/Indexer.hpp"

TEST(IndexerTest, TagAndQuery) {
    Indexer indexer;
    indexer.tagFile("file1.txt", "project");
    indexer.tagFile("file2.txt", "project");

    auto result = indexer.getFilesWithTag("project");
    EXPECT_EQ(result.size(), 2);
}

TEST(IndexerTest, RemoveFileClearsTags) {
    Indexer indexer;
    indexer.tagFile("file1.txt", "draft");
    indexer.removeFile("file1.txt");

    auto result = indexer.getFilesWithTag("draft");
    EXPECT_TRUE(result.empty());
}
