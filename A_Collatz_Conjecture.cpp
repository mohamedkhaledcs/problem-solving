#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double


int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int k; ll x; cin >> k >> x;
        for (int i = 0; i < k; ++i) {
          
            if ((x - 1) % 3 == 0) {
                ll p = (x - 1) / 3;
                
                if (p % 2 == 1) { 
                    x = p;
                    continue;
                }

            }
            x = x * 2;

        }
        cout << x << '\n';
 
      }

}
