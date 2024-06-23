#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    // Kadane's algorithm
    int n;
    cin >> n;
    vector<int> a(n);
    int ones = 0;
    for (auto& x: a) {
        cin >> x;
        ones += x; // Calculate number of ones
        if (x == 0) 
            x = 1;
        else 
            x = -1;// If x is 1, then if flipped would be -1, vice versa
    }

    // Edge case
    if (ones == n) { // We need exactly one operation, so choose subarray of length 1
        cout << n - 1 << endl;
        return;
    }

    int res = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        cur = max(cur, cur + a[i]);
        res = max(res, cur);
    }
    cout << ones + res << endl;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //int t; cin >> t;
    //while (t--) {
        solve();
    //}
    
    return 0;
}
