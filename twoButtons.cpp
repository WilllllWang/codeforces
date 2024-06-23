#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


int bfs(int n, int m) {
    unordered_set<int> seen;
    queue<int> q;
    seen.insert(n);
    q.push(n);
    int res = 0;
    while (!q.empty()) {
        int len = q.size();
        for (int i = 0; i < len; ++i) {
            int x = q.front();
            q.pop();
            if (x == 0 || x > 2 * m)
                continue;
            if (x == m)
                return res;

            if (seen.count(x - 1) == 0) {
                seen.insert(x - 1);
                q.push(x - 1);
            }
            if (seen.count(x * 2) == 0) {
                seen.insert(x * 2);
                q.push(x * 2);
            }
        }
        res++;
    }
    return -1;
}    



void solve() {
    int n, m;
    cin >> n >> m;
    if (n > m) 
        cout << n - m << endl;
    else if (n == m) 
        cout << n << endl;
    else
        cout << bfs(n, m) << endl;
}
    

int main() {
    ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    //int n; cin >> n;
    //while (n--) {
        solve();
    //}
    
    return 0;
}
    

