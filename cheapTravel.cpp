#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>

using namespace std;


void solve() {
    int n, m, a, b, j;
    cin >> n >> m >> a >> b;
    int res = INT_MAX;
    for (int i = 0; i <= n; i++) {
        j = 0;
        while (i + j*m < n) 
            j++;
        res = min(res, j*b + i*a);  
    }
    cout << res << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
        solve();

    return 0;
}