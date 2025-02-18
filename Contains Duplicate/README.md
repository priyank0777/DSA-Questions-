## Contains Duplicate

### Problem Statement:
Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

### Examples:
1. **Example 1**:
   - **Input**: nums = [1, 2, 3, 1]
   - **Output**: true
   - **Explanation**: The element 1 occurs at the indices 0 and 3.

2. **Example 2**:
   - **Input**: nums = [1, 2, 3, 4]
   - **Output**: false
   - **Explanation**: All elements are distinct.

3. **Example 3**:
   - **Input**: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
   - **Output**: true

### Constraints:
- The length of the array is between 1 and 10^5.
- Each element in the array is between -10^9 and 10^9.

### Approach:
1. **Create a HashSet**: We'll use a HashSet to track the unique elements we've seen so far in the array.
2. **Iterate through the array**: For each element, check if it is already in the HashSet.
3. **Check for duplicates**: If the element is in the HashSet, return `true`, indicating a duplicate exists.
4. **Add element to HashSet**: If the element is not in the HashSet, add it to the HashSet.
5. **Return `false` if no duplicates are found** after iterating through the 