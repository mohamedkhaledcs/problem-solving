#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        ll ans = -1;

        if (b % 1 == 0) {
            ll val = a * 1 + b / 1;
            if (val % 2 == 0) 
                ans = max(ans, val);

        }
        if (b % b == 0) {
            ll val = a * b + b / b;
            if (val % 2 == 0) 
                ans = max(ans, val);

        }
        if (b % 2 == 0) {
            ll val = a * 2 + b / 2;
            if (val % 2 == 0) 
                ans = max(ans, val);
                
        }
        if (b % 2 == 0) {
            ll val = a * (b / 2) + b / (b / 2);
            if (val % 2 == 0) 
                ans = max(ans, val);

        }

        cout << ans << '\n';
    }
    
}
