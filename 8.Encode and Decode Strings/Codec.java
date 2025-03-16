import java.util.*;

public class Codec {
    public String encode(List<String> strs) {
        StringBuilder encoded = new StringBuilder();
        for (String s : strs) {
            encoded.append(s.length()).append('#').append(s);
        }
        return encoded.toString();
    }

    public List<String> decode(String s) {
        List<String> decoded = new ArrayList<>();
        int i = 0;
        while (i < s.length()) {
            int hashIndex = s.indexOf('#', i);
            int length = Integer.parseInt(s.substring(i, hashIndex));
            i = hashIndex + 1;
            decoded.add(s.substring(i, i + length));
            i += length;
        }
        return decoded;
    }

    public static void main(String[] args) {
        Codec codec = new Codec();
        List<String> input = Arrays.asList("neet", "code", "love", "you");
        String encoded = codec.encode(input);
        System.out.println("Encoded: " + encoded);
        List<String> decoded = codec.decode(encoded);
        System.out.println("Decoded: " + decoded);
    }
}
