#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        vector<ll> arr(n + 1, 0);
        for (ll i = 0; i < n; ++i) {
            ll x;  cin >> x;
            if (0 <= x && x <= n) 
                arr[x]++;
        }

        ll missing = 0;
        for (ll i = 0; i < k; ++i) {
            if (arr[i] == 0) 
                missing++;
        }
        ll cntk = arr[k];

        cout << max(missing, cntk) << '\n'; 
        
        

        //!======================================!\\ 



        // ll n, k; cin >> n >> k;
        // vector<ll> arr(n);
        // set<ll> s;
        // for (ll i = 0; i < n; i++) {
        //     cin >> arr[i];
        //     s.insert(arr[i]);
        // }

        // if (k == 0) {
        //     ll cnt = 0;
        //     for (ll x : arr) if (x == 0) cnt++;
        //     cout << cnt << '\n';
        // } else {
        //     ll missing = 0;
        //     for (ll i = 0; i < k; i++) {
        //         if (!s.count(i)) missing++;
        //     }
        //     ll hasK = s.count(k) ? 1 : 0;
        //     cout << missing + hasK << '\n';

        // }

    }
}
