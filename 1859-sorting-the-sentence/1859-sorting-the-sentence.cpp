class Solution {
public:
    string sortSentence(string s) {

        string ans = "";
        for(int num = 1; num <= 9; num++)
        {
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == char(num + '0'))
                {
                    int start = i;
                    while(start > 0 && s[start - 1] != ' ')
                    {
                        start--;
                    }
                    for(int j = start; j < i; j++)
                    {
                        ans += s[j];
                    }
                    ans += ' ';
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};
