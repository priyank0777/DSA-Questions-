import java.util.Arrays;

class solution {
    public int[] productExceptSelf(int[] nums) {
        int length = nums.length;
        
        int[] left = new int[length];
        int[] right = new int[length];
        int[] answer = new int[length];
        
        // Fill the left product array
        left[0] = 1;
        for (int i = 1; i < length; i++) {
            left[i] = nums[i - 1] * left[i - 1];
        }
        
        // Fill the right product array
        right[length - 1] = 1;
        for (int i = length - 2; i >= 0; i--) {
            right[i] = nums[i + 1] * right[i + 1];
        }
        
        // Construct the answer array
        for (int i = 0; i < length; i++) {
            answer[i] = left[i] * right[i];
        }
        
        return answer;
    }

    // Example usage
    public static void main(String[] args) {
        solution solution = new solution();
        int[] nums1 = {1, 2, 3, 4};
        int[] nums2 = {-1, 1, 0, -3, 3};

        System.out.println(Arrays.toString(solution.productExceptSelf(nums1)));  // Output: [24, 12, 8, 6]
        System.out.println(Arrays.toString(solution.productExceptSelf(nums2)));  // Output: [0, 0, 9, 0, 0]
    }
}
