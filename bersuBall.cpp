#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void solve() {
    // sort input into array
    int b; cin >> b;
    vector<int> boys;
    for (int i = 0; i < b; ++i) {
        int x; cin >> x;
        boys.push_back(x);
    }
    
    int g; cin >> g;
    vector<int> girls;
    for (int i = 0; i < g; ++i) {
        int x; cin >> x;
        girls.push_back(x);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    // two pointers
    int bptr = 0, gptr = 0;
    int res = 0;
    while (bptr < b && gptr < g) {
        if (abs(boys[bptr] - girls[gptr]) <= 1) {
            bptr++;
            gptr++;
            res++;
        }
        else {
            if (boys[bptr] < girls[gptr])
                bptr++;
            else
                gptr++;
        }
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
    
