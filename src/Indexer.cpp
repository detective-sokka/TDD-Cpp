#include "file_indexer/Indexer.hpp"

void Indexer::tagFile(const std::string& file, const std::string& tag) {
    tagToFile[tag].insert(file);
    fileToTag[file].insert(tag);
}

void Indexer::removeFile(const std::string& file) {
    auto it = fileToTag.find(file);
    if (it != fileToTag.end()) {
        for (const auto& tag : it->second) {
            tagToFile[tag].erase(file);
        }
        fileToTag.erase(it);
    }
}

std::vector<std::string> Indexer::getFilesWithTag(const std::string& tag) const {
    std::vector<std::string> result;
    auto it = tagToFile.find(tag);
    if (it != tagToFile.end()) {
        result.assign(it->second.begin(), it->second.end());
    }
    return result;
}
