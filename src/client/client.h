#include <vector>

#include "include/block.h"

std::vector<Block> SplitDataBySize(const std::string& data, std::size_t size) {
    std::vector<Block> blocks;
    for (int i = 0; i < data.size(); i += size) {
        blocks.push_back(std::move(data.substr(i, size)));
    }
    return blocks;
}
