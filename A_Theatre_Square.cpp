#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    cout << ceil(n / a) * ceil(m / a) << '\n';

    return 0;
}
