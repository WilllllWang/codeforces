#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> unsorted(n);
    vector<int> sorted(n);
    for (int i = 0; i < n; i++) {
        cin >> unsorted[i];
        sorted[i] = unsorted[i];
    }
    sort(sorted.begin(), sorted.end());

    if (unsorted == sorted) {
        cout << "yes\n" << 1 << ' ' << 1 << endl;
        return;
    }

    int low = 0, high = n - 1;
    while (unsorted[low] == sorted[low] && low < n) low++;
    while (unsorted[high] == sorted[high] && high >= 0) high--;

    for (int i = low; i <= high; i++) {
        if (unsorted[i] != sorted[high + low - i]) {
            cout << "no" << endl;
            return; 
        }
    }
    cout << "yes\n" << low + 1 << ' ' << high + 1 << endl;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    //int n; cin >> n;
    //while (n--) {
        solve();
    //}
    
    return 0;
}
    
