#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int count[200005] = {0};  
        
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            if (num <= n) {
                count[num]++;
            }
        }
        
        int mex = 0;
        while (count[mex] > 0) {
            mex++;
        }
        
        int ans = min(mex, k - 1);
        cout << ans << '\n';
    }
    
}