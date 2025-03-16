# Encode and Decode Strings

## Problem Statement
Design an algorithm to encode a list of strings into a single string and decode it back to the original list of strings. The encoded string must be such that the decoded strings exactly match the original input.

### Examples
**Input:** `["neet","code","love","you"]`  
**Output:** `["neet","code","love","you"]`

**Input:** `["we","say",":","yes"]`  
**Output:** `["we","say",":","yes"]`

### Approach
The key challenge is handling strings that may contain any character, including potential delimiters. The solution involves encoding each string with its length followed by a delimiter (`#`) and then the string itself. This allows the decoder to accurately parse each string by first reading the length, then extracting the corresponding number of characters.

**Encoding Steps:**
1. For each string, prepend its length followed by `#`.
2. Concatenate all modified strings into one.

**Decoding Steps:**
1. Iterate through the encoded string.
2. For each segment, locate the `#` to determine the length of the subsequent string.
3. Extract the string using the identified length and move to the next segment.

This approach ensures that any characters (including `#`) within the original strings are correctly handled, as the length explicitly defines how many characters to read after each delimiter.
