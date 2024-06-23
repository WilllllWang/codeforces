#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;



void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n+1);
    for (int i = 0; i < n; i++)  
        cin >> a[i];
    for (int j = 0; j < n+1; j++)
        cin >> b[j];


    ll target = b[n];
    ll last = INT_MAX;
    ll res = 1;
    bool flag = false;
    for (int k = 0; k < n; k++) {
        res += abs(a[k] - b[k]);
        if (!flag) {
            ll upper = abs(a[k] - target);
            ll lower = abs(b[k] - target);
            last = min({last, upper, lower});
        }
        if ((target >= a[k] && target <= b[k]) || (target <= a[k] && target >= b[k])) 
            flag = true;
    }

    if (flag)
        cout << res << endl;
    else
        cout << res + last << endl;
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
