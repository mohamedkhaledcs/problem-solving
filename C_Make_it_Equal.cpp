#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <array>
#include <tuple>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

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

int main() {
    IOS;
    
    int t; cin>>t; 
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        vector<long long> Sline(n), Tline(n);

        for (int i = 0; i < n; i++) {
            cin >> Sline[i];
            Sline[i] %= k;
        }
        for (int i = 0; i < n; i++) {
            cin >> Tline[i];
            Tline[i] %= k;
        }

        sort(Sline.begin(), Sline.end());
        sort(Tline.begin(), Tline.end());

        if (Sline == Tline) yes;
        else no;
    
    
    }

      
}
