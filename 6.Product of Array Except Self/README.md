## Product of Array Except Self

### Problem Statement:
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

### Examples:
1. **Example 1**:
   - **Input**: nums = [1, 2, 3, 4]
   - **Output**: [24, 12, 8, 6]

2. **Example 2**:
   - **Input**: nums = [-1, 1, 0, -3, 3]
   - **Output**: [0, 0, 9, 0, 0]

### Constraints:
- The length of the array is between 2 and 10^5.
- Each element in the array is between -30 and 30.
- The input is generated such that `answer[i]` is guaranteed to fit in a 32-bit integer.

### Approach:
1. **Initialize Arrays**: Create two arrays, `left` and `right`, to store the product of all elements to the left and right of the current element, respectively.
2. **Calculate Left Products**: Fill the `left` array with the cumulative product of elements to the left of the current element.
3. **Calculate Right Products**: Fill the `right` array with the cumulative product of elements to the right of the current element.
4. **Calculate Result**: Multiply the corresponding elements of `left` and `right` arrays to get the final product array.