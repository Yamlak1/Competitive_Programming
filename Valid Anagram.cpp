class Solution {
public:
    bool isAnagram(string s1, string s2) {
        if (s1.length() != s2.length()) {
        return false;
    }
    unordered_map<char, int> freq1, freq2;
    for (char c : s1) {
        freq1[c]++;
    }
    for (char c : s2) {
        freq2[c]++;
    }
    for (auto p : freq1) {
        char c = p.first;
        int f1 = p.second;
        int f2 = freq2[c];
        if (f1 != f2) {
            return false;
        }
    }
    return true;
    }
};
