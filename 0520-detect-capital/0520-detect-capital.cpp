class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int n = word.length();
        int cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            if (word[i] >= 'A' && word[i] <= 'Z') 
            {
                cnt++;
            }
        }
        if (cnt == n) 
        {
            return true;
        }
        if (cnt == 0) 
        {
            return true;
        }
        if (cnt == 1 && word[0] >= 'A' && word[0] <= 'Z') 
        {
            return true;
        }
        return false;
    }
};