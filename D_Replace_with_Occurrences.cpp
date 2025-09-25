#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) 
            cin >> b[i];

        map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[b[i]].push_back(i);
        }

        vector<int> a(n, -1);
        int label = 1;
        bool flag = true;

        for (auto &[val, indices] : groups) {
            int need = val;  
            if (indices.size() % need != 0) {
                flag = false;
                break;
            }
            for (int i = 0; i < (int)indices.size(); i++) {
                a[indices[i]] = label;
                if ((i + 1) % need == 0) label++; 
            }
        }

        if (!flag) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; i++) cout << a[i] << ' ';
            cout << '\n';
        }


    }



}
