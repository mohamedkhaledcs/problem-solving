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

    // return 0;
}

void solve() {
    int t; cin >> t;
    while (t--) {
      int size; cin >> size;
      int gram1=0, gram2=0;

      for (int i = 0; i < size; ++i) {
        int n; cin >> n;
      
        if (n==1) gram1++;
        else if(n==2) gram2++;
      }
      ll sum= (1 * gram1) + (2 * gram2);
      if(sum%2!=0) {
        cout << "NO\n";
      }
      else {
        if(gram1 == 0 && (gram2 %2 != 0) ) {
          cout << "NO\n";
        }
        else {
          cout << "YES\n";
        }
      }

    }


}