#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        ll n,m; cin>> n >> m;

        vector<ll> arrTime(n + 1), arrSide(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> arrTime[i] >> arrSide[i];
        }

        ll lastTime = 0;
        ll lastSide = 0;
        ll ans = 0;

        for (int i = 1; i <= n; i++) {
            ll diff = arrTime[i] - lastTime;
            ll need = abs(arrSide[i] - lastSide);

            if ((diff % 2) == (need % 2))
                ans += diff;
            else
                ans += diff - 1;

            lastTime = arrTime[i];
            lastSide = arrSide[i];

        }


        
        
        // if (lastTime == m) {
        //     cout << ans << '\n';
        //     continue;
        // }

        // if (lastSide >= 2) {
        //     ans += m - lastTime;
        //     cout << ans << '\n';
        //     continue;
        // }

        // ll diff = m - lastTime;
        // ll need = 2 - lastSide;

        // if ((diff % 2) == (need % 2))
        //     ans += diff;
        // else
        //     ans += diff - 1;

        


        


        ans += m - lastTime;

        cout << ans << '\n';

    }

}

