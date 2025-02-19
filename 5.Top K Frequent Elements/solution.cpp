#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        auto comp = [&count](int n1, int n2) { return count[n1] < count[n2]; };
        std::priority_queue<int, std::vector<int>, decltype(comp)> heap(comp);
        for (auto& p : count) {
            heap.push(p.first);
        }
        std::vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(heap.top());
            heap.pop();
        }
        return result;
    }
};

// Example usage
int main() {
    Solution solution;
    std::vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    std::vector<int> nums2 = {1};

    auto result1 = solution.topKFrequent(nums1, 2);
    auto result2 = solution.topKFrequent(nums2, 1);

    for (int i : result1) std::cout << i << " ";  // Output: 1 2
    std::cout << std::endl;
    for (int i : result2) std::cout << i << " ";  // Output: 1
    std::cout << std::endl;

    return 0;
}
