def containsDuplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False

# Example usage
print(containsDuplicate([1, 2, 3, 1]))  # Output: true
print(containsDuplicate([1, 2, 3, 4]))  # Output: false
print(containsDuplicate([1, 1, 1, 3, 3, 4, 3, 2, 4, 2]))  # Output: true
