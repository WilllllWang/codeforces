#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    ll n, t;
    cin >> n >> t;
    vector<ll> books(n);
    for (auto& b: books) {
        cin >> b;
    }

    int res = 0;
    int cur = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < n) {
        cur += books[j];
        while (cur > t) {
            res = max(res, j - i);
            cur -= books[i];
            i++;
        }
        if (cur == t || j == books.size()-1) {
            res = max(res, j - i + 1);
            cur -= books[i];
            i++;
        }
        j++;
    }
    cout << res << endl;
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
