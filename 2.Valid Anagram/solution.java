import java.util.HashMap;

public class solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) return false;
        HashMap<Character, Integer> countS = new HashMap<>();
        HashMap<Character, Integer> countT = new HashMap<>();
        for (char c : s.toCharArray()) countS.put(c, countS.getOrDefault(c, 0) + 1);
        for (char c : t.toCharArray()) countT.put(c, countT.getOrDefault(c, 0) + 1);
        return countS.equals(countT);
    }

    // Example usage
    public static void main(String[] args) {
        solution solution = new solution();
        System.out.println(solution.isAnagram("anagram", "nagaram"));  // Output: true
        System.out.println(solution.isAnagram("rat", "car"));  // Output: false
    }
}
