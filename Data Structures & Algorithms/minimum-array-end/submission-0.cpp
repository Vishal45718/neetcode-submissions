class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long k = n-1;

        int pos = 0;

        while(k > 0)
        {
            //find bit where x has 0
            while(x & (1LL << pos))
            {
                pos++;
            }

            //put current bit of k here
            if(k & 1LL)
            {
                ans |= (1LL << pos);
            }

            //move to next bit of k
            k >>= 1;

            //move to next bit pos
            pos++;
        }

        return ans;
    }
};