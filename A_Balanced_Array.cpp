//? بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <array>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <bitset>
#include <iomanip>
#include <chrono>

#define st string
typedef long long ll;
typedef double db;

#define el '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

#define IOS ios::sync_with_stdio(false); \
            cin.tie(nullptr); \
            cout.tie(nullptr);

#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
#define sortA(n) sort(all(n))
#define sortD(n) sort(rall(n))
#define uniq(n) n.erase(unique(all(n)), n.end())
#define sz(n) (int)(n.size())
#define seti set<int>
#define rseti set<int, greater<int>>

using namespace std;

void solve();        //? Mohammed Khaled   ..   hcrazy

int main() {
    // IOS

    solve();
    
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];

        if (k > (n - 1) / 2) {
            cout << -1 << el;
            continue;
        }

        sort(arr.begin(), arr.end());
        vector<int> ans(n);

        int mid = n - k * 2;
        int i = 0, j = mid, idx = 0;

        for (int i = 1; i < n && j < n; i += 2) {
            ans[i] = arr[j++];
        }
        for (int i = 0; i < n; ++i) {
            if (ans[i] == 0 && i < mid) {
                ans[i] = arr[i++];
            }
        }

        for (int i = 0; i < n; ++i) cout << ans[i] << ' ';
        cout << el;
    }

}