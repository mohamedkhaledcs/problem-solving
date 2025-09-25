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
      int n; cin >> n;
      ll arr[n];
      // vector<int> arr (n);

      for (int i = 0; i < n; i++) {
        cin >> arr[i];
      }
      
      // كنت بشرح للشباب ف التيم الفرق علشان محدش دماغه تلسع ويقولك شاتيو
      // sort(arr, arr+n); sorted from small to big
      // sort(arr+n, arr); wrong reverse
      // sort(arr.rbegin(), arr.rend()); reverse in vector
      sort(arr, arr+n, greater<int>()); // sort from big to small in arr

      ll alice=0, bob=0;
      for (int i = 0; i < n; ++i){
        
        if(i%2==0) {
          
            if(arr[i]%2==0) {
                alice+=arr[i];
            }

        }
        else {
          
            if(arr[i]%2 != 0) {
                bob+=arr[i];
            }
        }

      }

      if(alice>bob) {
        cout << "Alice" << '\n';
      }
      else if(alice<bob) {
        cout << "Bob" << '\n';
      }
      else {
        cout << "Tie" << '\n';
      }
      
      
    }

}