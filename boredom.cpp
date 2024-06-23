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
#include <unordered_set>


using namespace std;
using ll = long long int;


void solve() {
    // Pre calculate frequencies of all nums
    const int limit = 1e5 + 1;
    vector<ll> dp(limit, 0);
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        dp[num]++;
    }

    // Max at every position is (cur + prepre) or (pre)
    dp[0] = 0;
    for (int i = 2; i < limit; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + dp[i] * i);
    }
    cout << dp[limit-1] << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}