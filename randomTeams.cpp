#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
#define lmin -10e10
#define lmax 10e10


void solve() {
    ll n, m;
    cin >> n >> m;
    ll kmin = 0;
    ll count = n / m;
    ll remain = n % m;
    kmin = (((count*(count-1)) / 2) * (m-remain)) + (((count+1)*count)/ 2 * remain);
    ll kmax = ((n - m + 1) * (n - m)) / 2 ;
    cout << kmin << ' ' << kmax << endl;
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
