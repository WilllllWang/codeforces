#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
    
    
    
    
void solve() {
    int n, m;
    cin >> n >> m;
    if (n == m) {
        cout << "YES" << endl;
        return;
    }
    if (n < m) {
        cout << "NO" << endl;
        return;
    }
    
    int remain = n - m;
    if (remain % 2 == 0) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
}
    
    
    
    
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}