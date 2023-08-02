class Solution {
public:
    int reverse(int x) 
    {
        long long rev_num=0;
        while (x!=0){
            long long digit = x % 10;
            rev_num = rev_num * 10 + digit;
            if (rev_num > 2147483647 || rev_num < -2147483648) {
                return 0;
            }
            else{
            x/=10;
            cout<< rev_num;
            }
        } 
        return rev_num;
    }
};
