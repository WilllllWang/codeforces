#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    int n, f, k;
    cin >> n >> f >> k;
    k--;
    f--;
    vector<int> a(n);
    for (auto& x: a)
        cin >> x;
    int fav = a[f];
    sort(a.begin(), a.end(), greater<int>());   // Sort in reverse order

    int start = 0, end = n;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (a[i] > fav)
            continue;
        if (a[i] == fav) {
            flag = true;
            start = i;
            while (a[i] == fav) {
                end = i;
                i++;
                if (i >= n)
                    break;
            }
        }
    }

    
    if (k >= start && k >= end)
        cout << "YES" << endl;
    else if (k < start && k < end)
        cout << "NO" << endl;
    else 
        cout << "MAYBE" << endl;
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
