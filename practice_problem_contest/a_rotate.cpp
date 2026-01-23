#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;

    int a = s / 100;
    int temp = s % 100;
    int b = temp / 10;
    int c = temp % 10;

    int sum = a+b+c;
    int ans = (sum * 100) + (sum * 10) + sum;
    cout << ans << endl;
    return 0;
}