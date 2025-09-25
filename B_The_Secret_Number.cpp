#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ans;

        ll p = 10; 
        for (int k = 1; k <= 18; k++) {
            ll d = 1 + p;
            if (n % d == 0) {
                ll x = n / d;
                if (x > 0) ans.push_back(x);
            }
            if (p > (ll)1e18 / 10) break; 
            p *= 10;
        }

        if (ans.empty()) {
            cout << 0 << el;
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << el;
            for (auto v : ans) cout << v << ' ';
            cout << el;
        }

    }




    return 0;
}
