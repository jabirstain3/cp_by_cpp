#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    list <int> even, odd;
    int ln;

    while (n--) {
        cin >> ln;
        if (ln % 2 == 0) {
            even.push_back(ln);
        } else {
            odd.push_back(ln);
        }
    }

    for (const auto &i : even) {
        cout << i << " ";
    }

    for (const auto &i : odd) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}