#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto& x: a) 
        cin >> x;

    map<array<ll, 3>, ll> count;
    for (int i = 0; i < n-2; i++) {
        count[{a[i], a[i+1], a[i+2]}]++;  // perfect 
        count[{0, a[i+1], a[i+2]}]++;     // beautiful 
        count[{a[i], 0, a[i+2]}]++;       // b
        count[{a[i], a[i+1], 0}]++;       // b
    }

    ll beautiful = 0;
    ll perfect = 0;
    for (auto& [match, freq]: count) {
        if (min({match[0], match[1], match[2]}) == 0) 
            beautiful += freq * (freq-1) / 2; // All possible pairs (n-1 + n-2 + ... + 1)
        else
            perfect += freq * (freq-1) / 2;
    }

    beautiful -= (perfect * 3); // 3 since there are three possible solutions line 17
    cout << beautiful << endl;
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
