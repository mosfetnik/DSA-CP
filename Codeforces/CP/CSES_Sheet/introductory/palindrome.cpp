#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0, oddIdx = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2) {
            oddCount++;
            oddIdx = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string half = "", mid = "";
    for (int i = 0; i < 26; i++)
        half += string(freq[i] / 2, 'A' + i);
    if (oddIdx != -1)
        mid = string(freq[oddIdx], 'A' + oddIdx);

    string ans = half + mid;
    reverse(half.begin(), half.end());
    ans += half;
    cout << ans;
}
