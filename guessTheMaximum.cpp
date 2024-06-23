#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x: a)
        cin >> x;
    
    int cur = 0;
    int res = INT_MAX;
    for (int i = 0; i < n-1; i++) {
        cur = max(a[i], a[i+1]);
        res = min(res, cur);
    }
    cout << res - 1 << endl;
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
