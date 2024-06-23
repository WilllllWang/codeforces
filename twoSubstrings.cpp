#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;




void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1) {
        cout << "NO" << endl;
        return;
    }

    // Record all matches indicies
    vector<int> ab;
    vector<int> ba;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == 'A' && s[i+1] == 'B')
            ab.push_back(i+i+1);
        else if (s[i] == 'B' && s[i+1] == 'A')
            ba.push_back(i+i+1);
    }

    // If ab or ba not found at all 
    if (ab.size() == 0 || ba.size() == 0) {
        cout << "NO" << endl;
        return;
    }

    // Check for non consecutive matches
    for (auto& x: ab) {
        for (auto& y: ba) {
            if (abs(x-y) > 2) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1; 
    //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
