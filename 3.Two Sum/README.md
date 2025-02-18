## Two Sum

### Problem Statement:
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

### Examples:
1. **Example 1**:
   - **Input**: nums = [2, 7, 11, 15], target = 9
   - **Output**: [0, 1]
   - **Explanation**: Because nums[0] + nums[1] == 9, we return [0, 1].

2. **Example 2**:
   - **Input**: nums = [3, 2, 4], target = 6
   - **Output**: [1, 2]

3. **Example 3**:
   - **Input**: nums = [3, 3], target = 6
   - **Output**: [0, 1]

### Constraints:
- The length of the array is between 2 and 10^4.
- Each element in the array is between -10^9 and 10^9.
- The target is between -10^9 and 10^9.
- Only one valid answer exists.

### Approach:
1. **Create a HashMap**: We'll use a HashMap (or dictionary in Python) to store the numbers we have seen so far along with their indices.
2. **Iterate through the array**: For each element, calculate the complement (i.e., target - current element).
3. **Check for complement**: If the complement is already in the HashMap, return the current index and the index of the complement from the HashMap.
4. **Add element to HashMap**: If the complement is not in the HashMap, add the current element and its index to the 