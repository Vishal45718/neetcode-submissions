class Solution {
public:

    void solve(vector<int>& nums, int target, int start, vector<int>& current, vector<vector<int>>& ans)
    {
        if(target == 0)
        {
            ans.push_back(current);
            return;
        }

        for(int i= start; i <nums.size(); i++)
        {
            if(nums[i] > target)
                continue;

            current.push_back(nums[i]);

            solve(nums, target-nums[i], i, current, ans);

            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        vector<int> current;

        solve(nums, target, 0 , current, ans);

        return ans;
    }
};
