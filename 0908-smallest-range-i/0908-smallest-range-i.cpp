class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i < nums.size(); i++) 
        {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        mn = mn + k;
        mx = mx - k;
        if(mx < mn) 
        {
            return 0;
        }
        return mx - mn;
    }
};
