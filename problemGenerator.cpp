#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    vector<int> count(7, 0);
    for (auto& c: a) 
        count[c - 'A']++;
    int res = 0;
    for (auto& x: count) {
        if (m > x)
            res += m - x;
    }
    cout << res << endl;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
