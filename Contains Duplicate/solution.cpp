#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

// Example usage
int main() {
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::vector<int> nums2 = {1, 2, 3, 4};
    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    std::cout << containsDuplicate(nums1) << std::endl;  // Output: 1 (true)
    std::cout << containsDuplicate(nums2) << std::endl;  // Output: 0 (false)
    std::cout << containsDuplicate(nums3) << std::endl;  // Output: 1 (true)

    return 0;
}
