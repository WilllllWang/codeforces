    #include <bits/stdc++.h>
        
    using namespace std;
    using ll = long long;
     
     
    void solve() {
        int x, y;
        cin >> x >> y;
        int res = 0;
        int remain = 0;
        if ((y % 2) == 1) {
            res += (y / 2) + 1;
            remain = 7 * (res-1) + 11;
        }
        else {
            res += y / 2;
            remain = 7 * res;
        }
     
        if (x > remain) {
            res += ((x-remain-1) / 15) + 1;
        }
     
        cout << res << endl;
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