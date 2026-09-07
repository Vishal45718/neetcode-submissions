class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int result = nums[0];
        
        for (size_t i = 1; i < nums.size(); ++i) {
            int curr = nums[i];
            

            if (curr < 0) {
                std::swap(max_so_far, min_so_far);
            }
   
            max_so_far = std::max(curr, max_so_far * curr);
            min_so_far = std::min(curr, min_so_far * curr);
            
            result = std::max(result, max_so_far);
        }
        
        return result;
    }
};