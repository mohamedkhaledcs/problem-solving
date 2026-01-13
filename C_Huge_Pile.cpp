#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll n, k; 
        cin >> n >> k;

        ll ans = -1;
        ll p = 1; 

        for (int i = 0; i <= 31; i++) {
            ll L = n / p; 
            ll R = (n + p - 1) / p; 

            if (L <= k && k <= R) {
                ans = i;
                break;
            }

            p *= 2; 
        }


        cout << ans << '\n';
    }

}

