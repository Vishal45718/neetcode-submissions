class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size();
        int m = n+ n;
        vector<int> ans(m);

        for(int i=0; i<n; i++)
        {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
};