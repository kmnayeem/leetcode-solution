class Solution {
public:
    string defangIPaddr(string address) {
        string ss;
        for(int i=0; i<address.size(); i++)
        {
            if(address[i] == '.')
            {
                ss += "[.]";
            }
            else
            {
                ss += address[i];
            }
        }
        return ss;
    }
};