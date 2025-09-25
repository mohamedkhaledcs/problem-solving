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
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'

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

    // return 0;
}

void solve() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int total = 2 * n;
        int even = 0, odd = 0;
        for (int i = 0; i < total; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == odd)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
  
}