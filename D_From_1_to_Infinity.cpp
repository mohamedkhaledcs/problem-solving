#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'


ll SumDig(ll n) {
    if (n <= 0) return 0;
    ll res = 0, f = 1;
    while (f <= n) {
        ll low = n - (n / f) * f; 
        ll mid = (n / f) % 10; 
        ll high = n / (f * 10); 

        res += high * 45 * f;
        res += mid * (mid - 1) / 2 * f;
        res += mid * (low + 1);

        f *= 10;
    }

    return res; 
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        ll k; cin >> k;

        ll len = 1, count = 9, start = 1;
        while (k > len * count) {
            k -= len * count;
            start *= 10;
            len++;
            count *= 10;
        }

        ll off = (k - 1) / len;
        ll idx = (k - 1) % len;
        ll last = start + off;

        ll ans = SumDig(last - 1);

        string s = to_string(last);
        for (int i = 0; i <= idx; i++) ans += s[i] - '0';

        cout << ans << el;

    }


    
}

// some edit by my instractor <--he is give me one hint(edit) for this problem-->