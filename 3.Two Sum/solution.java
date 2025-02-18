import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> num_map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (num_map.containsKey(complement)) {
                return new int[] { num_map.get(complement), i };
            }
            num_map.put(nums[i], i);
        }
        return new int[] {};
    }

    // Example usage
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums1 = {2, 7, 11, 15};
        int[] nums2 = {3, 2, 4};
        int[] nums3 = {3, 3};

        int[] result1 = solution.twoSum(nums1, 9);
        int[] result2 = solution.twoSum(nums2, 6);
        int[] result3 = solution.twoSum(nums3, 6);

        for (int i : result1) System.out.print(i + " ");  // Output: 0 1
        System.out.println();
        for (int i : result2) System.out.print(i + " ");  // Output: 1 2
        System.out.println();
        for (int i : result3) System.out.print(i + " ");  // Output: 0 1
        System.out.println();
    }
}
