class Solution {
public:

    int sum_of_squares(int n)
    {
        int sum =0;

        while(n != 0)
        {
            int rem = n % 10;
            sum += rem*rem;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> cycle;

        while(n != 1)
        {
            n = sum_of_squares(n);

            if(cycle.count(n))
            {
                return false;
            }

            cycle.insert(n);
        }

        return true;
    }
};
