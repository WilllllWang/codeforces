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
    int n, a, b, c, remain, k;
    cin >> n >> a >> b >> c;
    int res = 0;
    for (int i = 0; i*a <= n; i++) {
        for (int j = 0; i*a + j*b <= n; j++) {
            remain = n - i*a - j*b;
            if (remain % c == 0) {
                k = remain / c;
                res = max(res, i + j + k);
            }
        }
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