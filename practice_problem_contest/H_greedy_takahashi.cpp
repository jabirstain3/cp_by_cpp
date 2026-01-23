#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;


    long long feeda = min(a, k);
    
    a -= feeda;
    k -= feeda;

    long long feedb = min(b, k);
    b -= feedb;

    cout << a << " " << b << endl;

    return 0;
}
