#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Codec {
public:
    string encode(vector<string>& strs) {
        string encoded;
        for (string s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.size()) {
            int hashPos = s.find('#', i);
            int len = stoi(s.substr(i, hashPos - i));
            i = hashPos + 1;
            decoded.push_back(s.substr(i, len));
            i += len;
        }
        return decoded;
    }
};

int main() {
    Codec codec;
    vector<string> input = {"neet", "code", "love", "you"};
    string encoded = codec.encode(input);
    cout << "Encoded: " << encoded << endl;
    vector<string> decoded = codec.decode(encoded);
    cout << "Decoded: ";
    for (string s : decoded) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
