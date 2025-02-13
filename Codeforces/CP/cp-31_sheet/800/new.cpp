// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int minOperationsToPair(string s) {
//     vector<int> lower(26, 0), upper(26, 0);

//     for (char c : s) {
//         if (islower(c)) lower[c - 'a']++;
//         else upper[c - 'A']++;
//     }

//     int operations = 0;
//     for (int i = 0; i < 26; i++) {
//         operations += abs(lower[i] - upper[i]);
//     }

//     return operations / 2;
// }

// int main() {
//     string s = "ab";
//     cout << minOperationsToPair(s) << endl;  // Output: 1
//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool canFormTarget(string pat, string tar) {
//     int i = 0; // Pointer for tar

//     for (char c : pat) {
//         if (i < tar.size() && c == tar[i]) {
//             i++; // Move to the next character in tar
//         }
//     }

//     return i == tar.size(); // True if we matched all characters in tar
// }

// int main() {
//     string pat, tar;
//     cin >> pat >> tar;

//     cout << (canFormTarget(pat, tar) ? "true" : "false") << endl;
//     return 0;
// }



// #include <iostream>
// #include <stack>
// using namespace std;

// bool canFormTarget(string pat, string tar) {
//     stack<char> s;

//     // Process each character in pat
//     for (char c : pat) {
//         if (!s.empty() && s.top() != tar[s.size()]) {
//             s.pop(); // Delete last character if it does not contribute to target
//         }
//         s.push(c); // Always push current character
//     }

//     // Convert stack to string
//     string result;
//     while (!s.empty()) {
//         result = s.top() + result;
//         s.pop();
//     }

//     return result == tar; // Check if stack contents form tar
// }

// int main() {
//     string pat = "geuaek";
//     string tar = "geek";

//     cout << (canFormTarget(pat, tar) ? "true" : "false") << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool canFormTarget(string pat, string tar) {
    vector<char> s;
    
    for (char c : pat) {
        if (!s.empty() && s.back() != tar[s.size()]) {
            s.pop_back(); // Simulating deletion if mismatch
        }
        s.push_back(c);
    }
    
    return string(s.begin(), s.end()) == tar; // Check if we formed tar
}

int main() {
    string pat = "geuaek";
    string tar = "geek";

    cout << (canFormTarget(pat, tar) ? "true" : "false") << endl;
    return 0;
}
