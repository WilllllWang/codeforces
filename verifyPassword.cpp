#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;



void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') >= 0 || (s[i] - '0') <= 9)
            res[i] = s[i] - '0';
        else if ((s[i] - 'a') >= 0 && (s[i] - 'a') <= 25)
            res[i] = (s[i] - 'a');
        if (i > 0 && res[i] < res[i-1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;        
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
