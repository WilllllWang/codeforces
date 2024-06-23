#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;



void solve() {
    ll l, r;
    cin >> l >> r;
    ll res = 0;
    ll temp = 1;
    while (true) {
        if (temp > r) {
            cout << res-1 << endl;
            return;
        }
        if (temp == r) {
            cout << res << endl;
            return;
        }
        temp *= 2;
        res++;
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
