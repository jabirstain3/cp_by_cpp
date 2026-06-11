#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >>n;

    stack<char> don, undon;
    while (n--) {
        string c;
        cin >>c;

        if (c == "TYPE") {
            char x;
            cin >>x;

            don.push(x);
            
            while (!undon.empty()) {
                undon.pop();
            }
        } else if (c == "UNDO") {
            if (!don.empty()) {
                undon.push(don.top());
                don.pop();
            }
        } else if (c == "REDO") {
            if (!undon.empty()) {
                don.push(undon.top());
                undon.pop();
            } 
        } 
    }
    
    string ans;
    
    while (!don.empty()) {
        ans.push_back(don.top());
        don.pop();
    }
    reverse(ans.begin(), ans.end());

    cout <<ans <<"\n";

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >>n;

//     vector<int> odd, even;
//     for (int i=0;i<n;++i) {
//         int x;
//         cin >>x;

//         if (x % 2 == 0) {
//             even.push_back(x);
//         } else {
//             odd.push_back(x);
//         }
//     }

//     sort(even.begin(), even.end(), greater<int>());
//     sort(odd.begin(), odd.end(), greater<int>());

//     int evenN = -1;

//     if (!even.empty()) {
//         evenN = max(evenN, even[0]);
//     }

//     if (even.size() >= 2) {
//         evenN = max(evenN, even[0] + even[1]);
//     }

//     if (odd.size() >= 2) {
//         evenN = max(evenN, odd[0] + odd[1]);
//     }

//     cout <<evenN <<endl;

//     return 0;
// }