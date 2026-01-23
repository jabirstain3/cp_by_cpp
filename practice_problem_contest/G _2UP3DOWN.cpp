#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int diff = y - x;

    if ((diff > 0 && diff <= 2) || (diff < 0 && -diff <= 3)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
