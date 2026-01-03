#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, x;
    int m;
    cin >> s >> m;

    x += s[0];

    for (int i=1;i<s.length();i++) {

        if(s[i] <= '9' && s[i] >= '2'){
            int c = s[i] - '0';
            cout << x << endl;
            for(int j=1;j<c;j++){
                x += s[i-1];
                cout << x << endl;
            }
            continue;
        }

        x += s[i];
        cout << x << endl;

    }
    
    if (x.length() > m) {
        cout << x[m-1] << endl;
    }

    return 0;
}