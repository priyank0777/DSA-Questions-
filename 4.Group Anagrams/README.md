## Group Anagrams

### Problem Statement:
Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

### What is an Anagram?
An anagram is a word or phrase formed by rearranging the letters of another word or phrase, typically using all the original letters exactly once. For example, "listen" and "silent" are anagrams because they contain the same letters, just rearranged.

### Examples:
1. **Example 1**:
   - **Input**: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
   - **Output**: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]

2. **Example 2**:
   - **Input**: strs = [""]
   - **Output**: [[""]]

3. **Example 3**:
   - **Input**: strs = ["a"]
   - **Output**: [["a"]]

### Constraints:
- The length of the array is between 1 and 10^4.
- Each string is between 0 and 100 characters long.
- The strings consist of lowercase English letters.

### Approach:
1. **Create a HashMap**: We'll use a HashMap (or dictionary in Python) to group the anagrams.
2. **Sort Each String**: For each string, sort the characters to generate a key.
3. **Group Anagrams**: Use the sorted string as the key and append the original string to the list corresponding to that key in the HashMap.
4. **Return the Groups**: Return the values of the HashMap, which are the grouped anagrams.

