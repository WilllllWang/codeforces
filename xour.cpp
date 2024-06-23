#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    map<int, priority_queue<int>> mp;
    // Group numbers by removing 2 bits (xor less than 4)
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
        mp[a[i] >> 2].push(-a[i]); // Min queue so add its negative
    }

    // Traverse original vector and output corresponding group from top
    for (int i = 0; i < n; i++) {
        cout << -mp[a[i] >> 2].top() << ' '; // Turn number back to positive
        mp[a[i] >> 2].pop();
    }
    cout << endl;
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
    

