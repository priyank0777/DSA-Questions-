#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> countS, countT;
        for (char c : s) countS[c]++;
        for (char c : t) countT[c]++;
        return countS == countT;
    }
};

// Example usage
int main() {
    Solution solution;
    std::cout << solution.isAnagram("anagram", "nagaram") << std::endl;  // Output: 1 (true)
    std::cout << solution.isAnagram("rat", "car") << std::endl;  // Output: 0 (false)
    return 0;
}
