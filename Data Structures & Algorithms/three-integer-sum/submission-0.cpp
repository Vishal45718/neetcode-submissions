class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {

            //skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            //No possible triplet if nums[i] > 0
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0) {
                    left++;
                }
                else if (sum > 0) {
                    right--;
                }
                else {
                    result.push_back({
                        nums[i],
                        nums[left],
                        nums[right]
                    });

                    left++;
                    right--;

                    //skip duplicate left values
                    while (left < right && nums[left] == nums[left - 1])
                        left++;

                    //skip duplicate right values
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
            }
        }

        return result;
    }
};