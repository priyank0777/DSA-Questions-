from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        length = len(nums)
        
        # Initialize the left and right product arrays
        left = [0] * length
        right = [0] * length
        answer = [0] * length
        
        # Fill the left product array
        left[0] = 1
        for i in range(1, length):
            left[i] = nums[i - 1] * left[i - 1]
        
        # Fill the right product array
        right[length - 1] = 1
        for i in range(length - 2, -1, -1):
            right[i] = nums[i + 1] * right[i + 1]
        
        # Construct the answer array
        for i in range(length):
            answer[i] = left[i] * right[i]
        
        return answer

# Example usage
if __name__ == "__main__":
    solution = Solution()
    print(solution.productExceptSelf([1, 2, 3, 4]))  # Output: [24, 12, 8, 6]
    print(solution.productExceptSelf([-1, 1, 0, -3, 3]))  # Output: [0, 0, 9, 0, 0]
