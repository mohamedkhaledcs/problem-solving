#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n; i += 2) {
            ans = max(ans, v[i+1] - v[i]);
        }

        cout << ans << '\n';
    }
}
