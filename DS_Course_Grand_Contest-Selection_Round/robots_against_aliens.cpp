#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    if (x == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    float earning = (x*.2);

    float nim = 100/earning;
    
    cout << ceil(nim) << endl;

    return 0;
}