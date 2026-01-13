#include <bits/stdc++.h>
#define ll long long
using namespace std;

// time limit because he want Subarrays not Subsequences or implementation 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<int> d(n-1);
        for (int i = 0; i < n-1; i++)
            d[i] = abs(p[i] - p[i+1]);

        for (int k = 1; k <= n-1; k++) {
            ll count = 0;
            ll len = 0;

            for (int i = 0; i < n-1; i++) {
                if (d[i] >= k) {
                    len++;
                } else {
                    count += len * (len + 1) / 2;
                    len = 0;

                }

            }
            count += len * (len + 1) / 2;
            cout << count << ' ';
        }


        cout << '\n';
    }


}

