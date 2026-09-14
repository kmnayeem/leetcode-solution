class Solution {
public:
    string toLowerCase(string s) {
        string ss;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                ss += char(s[i] + 32);
            }
            else
            {
                ss += s[i];
            }
        }
        return ss;
    }
};
