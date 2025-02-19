from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = defaultdict(list)
        for s in strs:
            sorted_str = ''.join(sorted(s))
            anagrams[sorted_str].append(s)
        return list(anagrams.values())

# Example usage
solution = Solution()
print(solution.groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]))  # Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]
print(solution.groupAnagrams([""]))  # Output: [[""]]
print(solution.groupAnagrams(["a"]))  # Output: [["a"]]
