class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();

        if (m > n) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        //frequency of characters in s1
        for (char c : s1) {
            freq1[c - 'a']++;
        }

        //first window of size m
        for (int i = 0; i < m; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) return true;

        //slide the window
        for (int i = m; i < n; i++) {
            // Add new character
            freq2[s2[i] - 'a']++;

            //remove character leaving the window
            freq2[s2[i - m] - 'a']--;

            if (freq1 == freq2) {
                return true;
            }
        }

        return false;
    }
};