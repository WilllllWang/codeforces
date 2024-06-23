#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
#define lmin -10e10
#define lmax 10e10


void solve() {
    ll n, x;
    cin >> n;
    unordered_map<ll, ll> count;
    ll low = lmax;
    ll high = lmin; 
    for (ll i = 0; i < n; i++) {
        cin >> x;
        count[x]++;
        low = min(low, x);
        high = max(high, x);
    }

    if (low == high) {
        cout << 0 << ' ' << n*(n-1) / 2 << endl;
        return;
    }
    cout << high - low << ' ' << count[low] * count[high] << endl;
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
