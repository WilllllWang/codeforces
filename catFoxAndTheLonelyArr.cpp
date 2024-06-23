#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x: a) {
        cin >> x;
    }
    int ans = 0;
    for (int j = 0 ; j < 20 ; j ++) {
        int count = 1;
        for (int i = 0; i < n ; i++) {
            if ((a[i] >> j) & 1) {
                ans = max(ans, count);
                count = 1;
            }
            else {
                count ++;
            }
        }
        if (count < n) {
            ans = max(ans, count);
        }
    }
  cout << ans << endl;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
