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
#define yes cout << "YES" << el
#define no cout << "NO" << el

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
    IOS
    solve();
    return 0;
}

void solve() {
    int t; cin>>t; 

    while (t--) {
        int n; string s;
        cin >> n >> s;

        if (count(s.begin(), s.end(), '0') == n || count(s.begin(), s.end(), '1') == n) {
            cout << n << '\n';
            for (int i = 1; i <= n; i++)
                cout << i << ' ';
            cout << '\n';
            continue;
        }

        bool found = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                cout << 2 << '\n' << i + 1 << ' ' << i + 2 << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << 0 << '\n';
        } 

    }
    
}

