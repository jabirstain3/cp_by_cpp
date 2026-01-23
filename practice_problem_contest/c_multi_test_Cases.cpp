#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;

        int odd_count = 0;

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            
            if (a % 2 == 1) {
                odd_count++;
            }
        }

        cout << odd_count << endl;
    }
    return 0;
}