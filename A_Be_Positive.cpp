#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int neg = 0, zero = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == -1) neg++;
            else if (v[i] == 0) zero++;
        }

        int cost = zero;
        if (neg % 2 == 1) {
            cost += 2;
        }

        cout << cost << '\n';
    }
}
