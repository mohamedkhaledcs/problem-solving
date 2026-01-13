#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll s, k, m;
        cin >> s >> k >> m;

        ll d = min(s, k);   
        ll c = m / k;      
        ll tleft = m % k;  

        ll ans, flag=0;
        if (c % 2 == 0) {
            ll check1 = s - tleft;
            ans = max(flag, check1);
        } else {
            ll check2 = d - tleft;
            ans = max(flag, check2);
        }


        cout << ans << '\n';
    }



}

