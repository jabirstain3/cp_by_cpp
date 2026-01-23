#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n+2);

    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }

    vector<int> s(n+2, 0);

    for (int i=2;i<=n-1;i++) {
        if (a[i] < a[i-1] && a[i] < a[i+1]) {
            s[i] = 1;
        }
    }

    vector<int> sum(n+2, 0);
    for (int i=1;i<=n;i++) {
        sum[i] = sum[i-1] + s[i];
        // cout << sum[i] << " ";
    }
    // cout << endl;


    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        int silentDays = sum[r] - sum[l-1];
        cout << silentDays << endl;
    }

    return 0;
}