class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt = 0;
        int i = 0;
        while(i < text.size())
        {
            bool ok = false;
            while(i < text.size() && text[i] != ' ')
            {
                int j = 0;
                while(j < brokenLetters.size())
                {
                    if(text[i] == brokenLetters[j])
                    {
                        ok = true;
                    }

                    j++;
                }
                i++;
            }
            if(ok == false)
            {
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};
