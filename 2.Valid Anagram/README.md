## Valid Anagram

### Problem Statement:
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

### What is an Anagram?
An anagram is a word or phrase formed by rearranging the letters of another word or phrase, typically using all the original letters exactly once. For example, "listen" and "silent" are anagrams because they contain the same letters, just rearranged.

### Examples:
1. **Example 1**:
   - **Input**: s = "anagram", t = "nagaram"
   - **Output**: true

2. **Example 2**:
   - **Input**: s = "rat", t = "car"
   - **Output**: false

### Constraints:
- The length of the strings is between 1 and 5 * 10^4.
- The strings consist of lowercase English letters.

### Approach:
1. **Check Length**: First, we need to check if the lengths of the two strings are the same. If they are not, they cannot be anagrams.
2. **Count Characters**: We'll use a frequency counter (like a hashmap or array) to count the occurrences of each character in both strings.
3. **Compare Counts**: Finally, we compare the character counts of both strings. If they match for all characters, the strings are anagrams; otherwise, they 