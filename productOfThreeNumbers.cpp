#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;



void solve() {
    int n;
    cin >> n;
    set<int> seen;
    // Find first smallest divisor
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            seen.insert(i);
            n /= i;
            break;
        }
    }
    if (seen.size() < 1) {
        cout << "NO" << endl;
        return;
    }
    // Find the second smallest divisor
    for (int i = 2; i * i < n; i++) {
        if ((n % i == 0) && (seen.count(i) == 0)) {
            seen.insert(i);
            n /= i;
            break;
        }
    }

    if ((seen.size() < 2) || (seen.count(n) != 0 || n == 1))
        cout << "NO" << endl;
    else {
        cout << "YES" << endl; 
        seen.insert(n);
        for (auto x: seen) 
            cout << x << ' ';
        cout << endl;
    }
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
