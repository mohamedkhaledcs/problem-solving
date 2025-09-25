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
    
    // return 0;
}

void solve() {
  int T; cin>>T;
  // ll sum=0;
  int x, y, z;
  int X=0, Y=0, Z=0;

    while(T--){
      cin >> x >> y >> z;
      X+=x; Y+=y; Z+=z;
      // sum=x+y+z;
      
    }
    if(X==0 && Y==0 && Z==0) cout << "YES\n";
    else cout << "NO\n";
    
}