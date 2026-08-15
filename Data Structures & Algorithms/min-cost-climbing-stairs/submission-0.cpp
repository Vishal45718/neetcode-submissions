class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //dp[i] is the min cost o reach floor i
        //dp[i] = cost[i] + min(dp[i-1], dp[i-2]);

        int prev2 = cost[0];
        int prev1 = cost[1];

        for(int i =2 ; i< cost.size(); i++)
        {
            int current = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = current;
        }

        return min(prev1, prev2);
    }
};
