class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int m = s.length();
        int n = p.length();

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            freq2[p[i] - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < m; right++) {
            freq1[s[right] - 'a']++;

            if (right - left + 1 > n) {
                freq1[s[left] - 'a']--;
                left++;
            }

            if (right - left + 1 == n) {

                if (freq1 == freq2) {
                    ans.push_back(left);
                }
            }
        }
        return ans;
    }
};