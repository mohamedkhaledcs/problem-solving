#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[105]; 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        if (arr[0] == 1 || arr[n-1] == 1) {
            cout << "Alice" << '\n';
        } else {
            cout << "Bob" << '\n';
        }
    }

}
