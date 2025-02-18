import java.util.HashSet;

public class solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> seen = new HashSet<>();
        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            seen.add(num);
        }
        return false;
    }

    // Example usage
    public static void main(String[] args) {
        solution solution = new solution();
        int[] nums1 = {1, 2, 3, 1};
        int[] nums2 = {1, 2, 3, 4};
        int[] nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

        System.out.println(solution.containsDuplicate(nums1));  // Output: true
        System.out.println(solution.containsDuplicate(nums2));  // Output: false
        System.out.println(solution.containsDuplicate(nums3));  // Output: true
    }
}
