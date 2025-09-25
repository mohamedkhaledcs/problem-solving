#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'

void tryCheck(int takeV, int L, int R, int z, int y, ll &best, vector<ll>& sumV, vector<ll>& sumK) {
    if (takeV < L || takeV > R) return; 
    int takeK = z - takeV;
    if (takeK < 0 || takeK > y) return;
    best = max(best, sumV[takeV] + sumK[takeK]);
    
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m, tt;
        cin >> n >> m >> tt;

        vector<ll> vadim(n), kostya(m);
        for (int i = 0; i < n; i++) cin >> vadim[i];
        for (int i = 0; i < m; i++) cin >> kostya[i];

        sort(vadim.rbegin(), vadim.rend());
        sort(kostya.rbegin(), kostya.rend());

        vector<ll> sumV(n + 1, 0), sumK(m + 1, 0);
        for (int i = 0; i < n; i++) sumV[i + 1] = sumV[i] + vadim[i];
        for (int i = 0; i < m; i++) sumK[i + 1] = sumK[i] + kostya[i];

        while (tt--) {
            int x, y, z;
            cin >> x >> y >> z;

            int L = max(0, z - y);
            int R = min(x, z);

            if (L > R) {
                cout << 0 << el;
                continue;
            }

            ll best = 0;

            tryCheck(L, L, R, z, y, best, sumV, sumK);
            tryCheck(R, L, R, z, y, best, sumV, sumK);

            int mid = (L + R) / 2;
            tryCheck(mid, L, R, z, y, best, sumV, sumK);
            tryCheck(mid + 1, L, R, z, y, best, sumV, sumK);

            cout << best << el;

        }

    }



}
