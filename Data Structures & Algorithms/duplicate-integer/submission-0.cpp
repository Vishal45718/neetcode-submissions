class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> repeat;

        for(int i=0; i<nums.size(); i++)
        {
            if(repeat.count(nums[i]))
            {
                return true;
            }

            repeat.insert(nums[i]);
        }

        return false;
    }
};