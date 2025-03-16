#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        
        for (int num : numSet) {
            if (!numSet.count(num - 1)) {  // Check sequence start
                int current = num;
                int streak = 1;
                
                while (numSet.count(current + 1)) {  // Expand sequence
                    current++;
                    streak++;
                }
                
                longest = max(longest, streak);
            }
        }
        
        return longest;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {1, 0, 1, 2};
    cout << sol.longestConsecutive(nums);  // Output: 3
    return 0;
}
