import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

class solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> count = new HashMap<>();
        for (int num : nums) {
            count.put(num, count.getOrDefault(num, 0) + 1);
        }
        PriorityQueue<Integer> heap = new PriorityQueue<>((n1, n2) -> count.get(n1) - count.get(n2));
        for (int num : count.keySet()) {
            heap.add(num);
            if (heap.size() > k) heap.poll();
        }
        int[] result = new int[k];
        for (int i = k - 1; i >= 0; --i) {
            result[i] = heap.poll();
        }
        return result;
    }

    // Example usage
    public static void main(String[] args) {
        solution solution = new solution();
        int[] nums1 = {1, 1, 1, 2, 2, 3};
        int[] nums2 = {1};

        int[] result1 = solution.topKFrequent(nums1, 2);
        int[] result2 = solution.topKFrequent(nums2, 1);

        for (int i : result1) System.out.print(i + " ");  // Output: 1 2
        System.out.println();
        for (int i : result2) System.out.print(i + " ");  // Output: 1
        System.out.println();
    }
}
