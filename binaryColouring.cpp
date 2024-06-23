#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;



void solve() {
    int x; 
    cin >> x;
    int num = x;
    int power = 0;
    while (num > 0) {
        num /= 2;
        power++;
    }
    int greatest = 1;
    int power_temp = power;
    while (power_temp--)
        greatest *= 2;
    if (x == greatest/2) {
        greatest /= 2;
        power--;
    }
    vector<int> res(power+1, 0);
    res[power] = 1;
    

    int remain = greatest - x; 
    while (remain > 0) {
        int temp = 1;
        int count = 0;
        while (temp <= remain) {
            temp *= 2;
            count++;
        } 
        
        if (temp > remain) {
            count--;
            temp /= 2;
        }
        res[count] = -1;
        remain -= temp;
    }
    cout << res.size() << endl;
    for (auto& x: res) 
        cout << x << ' ';
    cout << endl;
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
