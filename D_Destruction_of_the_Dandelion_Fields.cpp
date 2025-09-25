#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> odds;

        ll sumEvens = 0;
        for (int i = 0; i < n; ++i) {
            ll x; cin >> x;
            if (x % 2 == 0) {
                sumEvens += x;
            }
            else {
                odds.push_back(x);
            }

        }

        // =============================

        if (odds.empty()) {
            cout << 0 << '\n';
            continue;
        }

        sort(odds.begin(), odds.end(), greater<ll>()); 

        // ===============================================

        int sizeeOdds = odds.size(); 
        int take = (sizeeOdds + 1) / 2;     // ceil for size of odds + 1 /2 
        ll sumOddsTake = 0;
        for (int i = 0; i < take; ++i) sumOddsTake += odds[i];

        cout << (sumEvens + sumOddsTake) << '\n';


    }

}


