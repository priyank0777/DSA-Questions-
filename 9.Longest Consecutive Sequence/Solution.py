def longestConsecutive(nums):
    num_set = set(nums)
    longest = 0
    
    for num in num_set:
        if num - 1 not in num_set:  # Check if it's a sequence start
            current_num = num
            current_streak = 1
            
            while current_num + 1 in num_set:  # Expand the sequence
                current_num += 1
                current_streak += 1
            
            longest = max(longest, current_streak)
    
    return longest

# Example usage
nums = [100, 4, 200, 1, 3, 2]
print(longestConsecutive(nums))  # Output: 4
