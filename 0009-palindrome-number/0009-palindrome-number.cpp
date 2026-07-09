class Solution {
public:
    bool isPalindrome(int x) {
        long long res = 0;
        int cpy = x;
        if(x<0)
        {
            return false;
        }
        else
        {
            while(x>0)
            {
                int digit = x%10;
                res = res*10 + digit;
                x /= 10;
            }
            if(res == cpy)
            return true;
            else
            return false;
        }
    }
};