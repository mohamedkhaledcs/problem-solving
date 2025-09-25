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
    int t; cin>>t;
    while(t--) {
      solve();
      
    }

    // return 0;
}

void solve() {
  

    string n; cin>>n;
    for(int i=1; i<n.size(); i++) {
      if(n[i-1] == n[i]) {
        cout << "1\n";
        return;

      }
    }
    cout << n.size() << '\n';

}


    // int count = 0;
    // string n; cin>>n;
    // if(n.size() == 1) {
    //   cout << "1\n";
    // }
    // else{
      
    //   if(n.size() == 2) {
    //     if(n[0] == n[1]) {
    //       count = 0;
    //     }
        
    //     cout << count+1 << '\n';
    //   }
    //   else if (n.size() == 3) {
    //     if(n[0] == n[1] && n[1] == n[2]) {
    //       count = 0;
    //     }
    //     cout << count+1 << '\n';
    //   }
    //   else if(n.size() == 3) {
    //     if(n[0] == n[1] && n[1] != n[2]) {
    //       count = 0;
    //     }
    //     cout << count+1 << '\n';
    //   }
    //   else if(n.size() == 3) {
    //     if(n[0] != n[1] && n[1] == n[2]) {
    //       count = 0;
    //     }
    //     cout << count+1 << '\n';
    //   }
    //   else{
    //       for (int i = 1; i < n.size(); i++){
    //       if(n[i] != n[i-1]) {
    //           count++;
    //       }
    //   }
    //     cout << count+1 << '\n';

    //   }
      
    // }
    
