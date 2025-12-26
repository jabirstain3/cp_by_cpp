// 


#include <bits/stdc++.h>
using namespace std;

bool valid_half(int r, int k) {
    int mx = max(r, k);
    int mn = min(r, k);
    return mx <= 2 * mn + 2;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int r1 = a;
        int k1 = b;
        int r2 = c - a;
        int k2 = d - b;

        if (valid_half(r1, k1) &&
            valid_half(r2, k2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
