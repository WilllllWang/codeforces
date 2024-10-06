#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;


void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n);
    vector<int> b;
    unordered_set<int> seen;
    for (int& x: a) cin >> x;
    for (int i = 0; i < m; i++) {
        int y; cin >> y;
        if (!seen.count(y)) {
            b.push_back(y);
            seen.insert(y);
        }
    }
    m = b.size();

    int i;
    for (i = 0; i < min(n, m); i++) 
        if (a[i] != b[i]) break;
    
    if (i == n || i == m) cout << "YA\n";
    else cout << "TIDAK\n";
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

