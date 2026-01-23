#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long dist = k / n;
    long long rem = k % n;
    
    cout << dist << " " << rem << endl;

    return 0;
}