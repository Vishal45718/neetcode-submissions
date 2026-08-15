class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a = 0;
        int b = 0;
        string ans = "";

        int m = word1.size();
        int n = word2.size();

        while(a < m && b < n)
        {
            ans += word1[a];
            ans += word2[b];
            a++;
            b++;
        }

    
            while(b <n)
            {
                ans += word2[b];
                b++;
            }
  
            while(a < m)
            {
                ans += word1[a];
                a++;
            }

            return ans;
    } 
};