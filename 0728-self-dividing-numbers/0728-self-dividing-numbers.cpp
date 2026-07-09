class Solution {
private:
    bool isSelfDividingInteger(int n) 
    {
        int num = n;
        while (num > 0) 
        {
            int remainder = num % 10;
            num /= 10;
            if (remainder == 0 || n % remainder != 0) 
            {
                return false;
            }
        }
        return true;
    }

public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> result;
        for (int i = left; i <= right; i++) 
        {
            if (isSelfDividingInteger(i)) 
            {
                result.push_back(i);
            }
        }
        return result;
    }
};