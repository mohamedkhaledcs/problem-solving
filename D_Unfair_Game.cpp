#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[70][70];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 70; i++) {
        arr[i][0] = arr[i][i] = 1;
        for (int j = 1; j < i; j++)
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
    }

    int t; cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll tmp = n;
        int d = 0;
        while (tmp > 1) {
            tmp /= 2;
            d++;
        }

        ll good = 0;

        for (int i = 0; i < d; i++) {
            int mx = k - i - 1;
            if (mx < 0) continue;
            if (mx > i) mx = i;

            for (int j = 0; j <= mx; j++)
                good += arr[i][j];
        }

        if (d + 1 <= k)
            good++;


        cout << n - good << '\n';
    }


}

