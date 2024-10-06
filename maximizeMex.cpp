#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;



void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int y; cin >> y;
        if (y < n) a[y]++;
    }

    for (int i = 0; i <= n; i++) {
        if (a[i] == 0) {
            cout << i << '\n';
            break;
        }

        if (a[i] > 1 && i + x < n) {
            a[i + x] += a[i] - 1;
            a[i] = 1;
        }
    }
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

