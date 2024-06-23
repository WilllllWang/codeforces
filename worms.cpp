#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
const int limit = 1e6 + 1;

void solve() {
    int n; cin >> n;
    int worms[n];
    int x; cin >> x;
    worms[0] = x;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        worms[i] = x + worms[i-1];
    }

    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int j; cin >> j;
        int low = 0;
        int high = n - 1;
        if (j == worms[high]) {
            cout << high + 1 << endl;
            continue;
        }
        if (j <= worms[low]) {
            cout << low + 1 << endl;
            continue;
        }
        while (low <= high) {
            int mid = (low + high) / 2;
            if (j < worms[mid]) 
                high = mid;
            else if (j > worms[mid])
                low = mid;
            else {
                cout << mid + 1 << endl;
                break;
            }

            if (high - low == 1) {
                cout << high + 1 << endl;
                break;
            }
        }
    }
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
    
