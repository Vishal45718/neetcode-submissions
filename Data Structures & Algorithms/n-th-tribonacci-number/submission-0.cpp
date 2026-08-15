class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1) return n;

        if(n == 2) return 1;

        int T_n_3 = 0;
        int T_n_2 = 1;
        int T_n_1 = 1;

        for(int i=3; i<n; i++)
        {
            int T_n = T_n_1 + T_n_2 + T_n_3;
            T_n_3 = T_n_2;
            T_n_2 = T_n_1;
            T_n_1 = T_n;
        }
        return T_n_1 + T_n_2 + T_n_3;
    }
};