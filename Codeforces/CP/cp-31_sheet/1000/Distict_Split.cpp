#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> cnt(26, 0), p(26, 0);

        for (auto &c : s)
        {
            cnt[c - 'a']++;
        }

        int ans = 0;

        for (auto &c : s)
        {

            --cnt[c - 'a'];
              ++p[c - 'a'];

            int distinct_count =0;

            for(int i=0;i<26;i++){

                if(cnt[i]>0)distinct_count++;
                if(p[i]>0)distinct_count++;
            }

            ans = max(ans,distinct_count);
        }

        cout<<ans<<endl;
    }
}
