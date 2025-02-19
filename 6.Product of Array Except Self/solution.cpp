#include <iostream>
#include <vector>

class solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int length = nums.size();
        
        std::vector<int> left(length, 0), right(length, 0), answer(length, 0);
        
        // Fill the left product array
        left[0] = 1;
        for (int i = 1; i < length; i++) {
            left[i] = nums[i - 1] * left[i - 1];
        }
        
        // Fill the right product array
        right[length - 1] = 1;
        for (int i = length - 2; i >= 0; i--) {
            right[i] = nums[i + 1] * right[i + 1];
        }
        
        // Construct the answer array
        for (int i = 0; i < length; i++) {
            answer[i] = left[i] * right[i];
        }
        
        return answer;
    }
};

// Example usage
int main() {
    solution solution;
    std::vector<int> nums1 = {1, 2, 3, 4};
    std::vector<int> nums2 = {-1, 1, 0, -3, 3};

    auto result1 = solution.productExceptSelf(nums1);
    auto result2 = solution.productExceptSelf(nums2);

    for (int i : result1) std::cout << i << " ";  // Output: 24 12 8 6
    std::cout << std::endl;
    for (int i : result2) std::cout << i << " ";  // Output: 0 0 9 0 0
    std::cout << std::endl;

    return 0;
}
