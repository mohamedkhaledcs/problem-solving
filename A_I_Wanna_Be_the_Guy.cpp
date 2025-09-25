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
    // IOS
    solve();
    return 0;
}

void solve() {
    int check; cin>>check; 
    set <int> v;

    int p; cin>>p;
    for(int i=0; i<p; i++) {
        int n; cin>>n;
        v.insert(n);
    }
    int q; cin>>q;
    for(int i=0; i<q; i++) {
        int n; cin>>n;
        v.insert(n);
    }

    if(v.size() == check) {
        cout << "I become the guy." << el;
    } else {
        cout << "Oh, my keyboard!" << el;
    }

    
}