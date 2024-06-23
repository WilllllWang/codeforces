#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x: a)
        cin >> x;
    vector<int> b(n);
    for (auto& x: b)
        cin >> x;
    int m;
    cin >> m;
    unordered_map<int, int> count;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        count[x]++;
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            count[b[i]]--;
            if (count[b[i]] < 0) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

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


