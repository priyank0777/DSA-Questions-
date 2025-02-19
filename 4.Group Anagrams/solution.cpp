#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagrams;
        for (std::string s : strs) {
            std::string sorted_str = s;
            std::sort(sorted_str.begin(), sorted_str.end());
            anagrams[sorted_str].push_back(s);
        }
        std::vector<std::vector<std::string>> result;
        for (auto& pair : anagrams) {
            result.push_back(pair.second);
        }
        return result;
    }
};

// Example usage
int main() {
    Solution solution;
    std::vector<std::string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::string> strs2 = {""};
    std::vector<std::string> strs3 = {"a"};

    auto result1 = solution.groupAnagrams(strs1);
    auto result2 = solution.groupAnagrams(strs2);
    auto result3 = solution.groupAnagrams(strs3);

    for (auto& group : result1) {
        for (std::string& s : group) std::cout << s << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (auto& group : result2) {
        for (std::string& s : group) std::cout << s << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (auto& group : result3) {
        for (std::string& s : group) std::cout << s << " ";
        std::cout << std::endl;
    }

    return 0;
}
