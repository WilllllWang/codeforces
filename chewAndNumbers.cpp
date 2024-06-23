#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    string x;
    cin >> x;
    ll res = 0;
    ll n;
    for (int t = 0; x[t]; ++t) {
        if (t == 0 && x[t] == '9') {
            res = res * 10 + 9;
            continue;
        }
        if (x[t] >= '5' && x[t] <= '9')
            n = '9' - x[t];
        else
            n = x[t] - '0';
        res = res * 10 + (long long)n;
    }
    cout << res << endl;
    
         
}
    


int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    //int n; cin >> n;
    //while (n--) {
        solve();
    //}
    
    return 0;
}
    
