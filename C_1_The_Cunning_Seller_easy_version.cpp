#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

const int MAXX = 25;
static ll p3[MAXX];


int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  
    p3[0] = 1;
    for (int i = 1; i < MAXX; ++i) p3[i] = p3[i - 1] * 3;

    auto deal = [&](int x) -> ll {
        if (x == 0) return 3; 
        return p3[x + 1] + 1LL * x * p3[x - 1]; 
    };

    int t; cin >> t;
    while (t--) {
        ll n;  cin >> n;

        vector<int> d;
        while (n > 0) {
            d.push_back(n % 3);
            n /= 3;
        }

        ll ans = 0;
        for (int i = 0; i < (int)d.size(); ++i) {
            if (d[i]) ans += 1LL * d[i] * deal(i);
        }

        cout << ans << el; 

    }



  
}
