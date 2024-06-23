#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}



void solve() {
    int p1, p2, p3; 
    cin >> p1 >> p2 >> p3;
    int total = p1 + p2 + p3;
    if (total % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    int res = 0;
    priority_queue<int> pq;
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    while (p1 > 0 || p2 > 0 || p3 > 0) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        if (y == 0) 
            break;
        pq.push(--x);
        pq.push(--y);
        res++;
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
    

