## Top K Frequent Elements

### Problem Statement:
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

### Examples:
1. **Example 1**:
   - **Input**: nums = [1, 1, 1, 2, 2, 3], k = 2
   - **Output**: [1, 2]

2. **Example 2**:
   - **Input**: nums = [1], k = 1
   - **Output**: [1]

### Constraints:
- The length of the array is between 1 and 10^5.
- Each element in the array is between -10^4 and 10^4.
- `k` is in the range [1, the number of unique elements in the array].
- It is guaranteed that the answer is unique.

### Approach:
1. **Count Frequencies**: Use a HashMap (or dictionary in Python) to count the occurrences of each element in the array.
2. **Use a Heap**: Use a max-heap or a priority queue to keep track of the top `k` frequent elements.
3. **Return the Top K Elements**: Extract the elements from the heap and return them.
