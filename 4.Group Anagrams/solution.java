import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> anagrams = new HashMap<>();
        for (String s : strs) {
            char[] charArray = s.toCharArray();
            java.util.Arrays.sort(charArray);
            String sorted_str = new String(charArray);
            if (!anagrams.containsKey(sorted_str)) {
                anagrams.put(sorted_str, new ArrayList<>());
            }
            anagrams.get(sorted_str).add(s);
        }
        return new ArrayList<>(anagrams.values());
    }

    // Example usage
    public static void main(String[] args) {
        solution solution = new solution();
        String[] strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
        String[] strs2 = {""};
        String[] strs3 = {"a"};

        System.out.println(solution.groupAnagrams(strs1));  // Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]
        System.out.println(solution.groupAnagrams(strs2));  // Output: [[""]]
        System.out.println(solution.groupAnagrams(strs3));  // Output: [["a"]]
    }
}
