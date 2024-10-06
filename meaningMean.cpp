#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n; cin >> n;
    vector<int> a(n);
    for (int& x: a) cin >> x;

    while (a.size() > 1) {
        sort(a.begin(), a.end());
        a.push_back((a[0] + a[1])/2);
        a.erase(a.begin());
        a.erase(a.begin());
    }
    cout << a[0] << '\n';
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

