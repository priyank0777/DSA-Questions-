# Longest Consecutive Sequence

## Problem Statement
Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence. The algorithm must run in **O(n)** time.

### Examples
**Input:** `[100, 4, 200, 1, 3, 2]`  
**Output:** `4`  
**Explanation:** The longest consecutive sequence is `[1, 2, 3, 4]`.

**Input:** `[0, 3, 7, 2, 5, 8, 4, 6, 0, 1]`  
**Output:** `9`  
**Explanation:** The sequence spans `[0, 1, 2, 3, 4, 5, 6, 7, 8]`.

### Approach
The optimal solution uses a **hash set** to achieve O(n) time complexity:
1. **Convert the array to a set** for O(1) lookups.
2. **Identify sequence starts**: For each number, check if `num - 1` exists in the set. If not, it marks the start of a sequence.
3. **Expand sequences**: For each start, incrementally count consecutive numbers to determine the sequence length.
4. **Track the longest sequence** encountered.

This avoids sorting (O(n log n)) and ensures each number is processed at most twice, maintaining O(n) efficiency.
