#pragma once

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Indexer {
public:
    void tagFile(const std::string& file, const std::string& tag);
    void removeFile(const std::string& file);
    std::vector<std::string> getFilesWithTag(const std::string& tag) const;

private:
    std::unordered_map<std::string, std::unordered_set<std::string>> tagToFile;
    std::unordered_map<std::string, std::unordered_set<std::string>> fileToTag;
};
