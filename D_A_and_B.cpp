#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        ll ans = 1e18; 

        for (int t = 0; t < 2; t++) {
            char target = (t == 0 ? 'a' : 'b');
            vector<ll> positions;

            for (int i = 0; i < n; i++) {
                if (s[i] == target) 
                    positions.push_back(i);
            }

            if (positions.empty()) {
                ans = 0;
                continue;
            }

            int m = positions.size();
            ll median = positions[m / 2];
            ll move = 0;

            for (int i = 0; i < m; i++) {
                ll expected = median - (m / 2) + i;
                move += abs(positions[i] - expected);
            }

            ans = min(ans, move);
        }

        cout << ans << '\n';
    }
}
