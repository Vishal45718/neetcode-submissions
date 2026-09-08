class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        int sum_expected = n *(n+1) /2;
        int sum_original = 0;
        for(int i=0; i<n; i++)
        {
            sum_original += nums[i];
        }

        return sum_expected - sum_original;
    }
};
