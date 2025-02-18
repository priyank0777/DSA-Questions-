#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};

// Example usage
int main() {
    Solution solution;
    std::vector<int> nums1 = {2, 7, 11, 15};
    std::vector<int> nums2 = {3, 2, 4};
    std::vector<int> nums3 = {3, 3};

    auto result1 = solution.twoSum(nums1, 9);
    auto result2 = solution.twoSum(nums2, 6);
    auto result3 = solution.twoSum(nums3, 6);

    for (int i : result1) std::cout << i << " ";  // Output: 0 1
    std::cout << std::endl;
    for (int i : result2) std::cout << i << " ";  // Output: 1 2
    std::cout << std::endl;
    for (int i : result3) std::cout << i << " ";  // Output: 0 1
    std::cout << std::endl;

    return 0;
}
