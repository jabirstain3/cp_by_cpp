#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << s << endl;
        return 0;
    }

    for (char c : s) {
        if (s.find(c) == s.rfind(c)) {
            cout << c << endl;
            return 0;
        } 
    }

    cout << -1 << endl;

    return 0;
}