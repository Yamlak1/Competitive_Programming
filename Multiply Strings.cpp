class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size();
        int n = num2.size();
        string result(m + n, '0');
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int p1 = i + j;
            int p2 = i + j + 1;
            int sum = (num1[i] - '0') * (num2[j] - '0') + (result[p2] - '0');
            result[p2] = sum % 10 + '0';
            result[p1] += sum / 10;
        }
    }
    size_t start = result.find_first_not_of('0');
    if (start != string::npos) {
        return result.substr(start);
    }
    return "0";
    }
};
