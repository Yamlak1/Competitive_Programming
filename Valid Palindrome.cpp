class Solution {
public:
    bool isPalindrome(string s) {
        string newStr;
        for (int j = 0; j < s.size(); j++) {
            if (isalnum(s[j])) {
                newStr += tolower(s[j]);
            }
        }
        int len = newStr.size();
        for (int i = 0; i < len / 2; i++) {
            if (newStr[i] != newStr[len - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
