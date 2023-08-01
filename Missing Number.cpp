class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int Sum = 0;
        for (int i = 0; i < n; i++) {
            Sum ^= arr[i];
            Sum ^= i;
        }
        Sum ^= n;
        return Sum;
    } 
};
