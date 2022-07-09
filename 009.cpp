class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int reversed_num = 0, remainder, reg;
        reg = x;
        while(x != 0) {
            remainder = x % 10;
            reversed_num = reversed_num * 10 + remainder;
            x /= 10;
            cout << reversed_num << endl;
        }
        return reg == reversed_num;
    }
};