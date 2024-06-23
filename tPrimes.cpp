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
using ll = long long;

set<ll> tprimes;
const int limit = 1e6 + 1;
bool visited[limit];;


void solve() {
    // tprimes are the squares of prime numbers
    for (ll i = 2; i < limit; ++i) {
        if (visited[i]) continue;
        tprimes.insert(i * i);
        for (int j = 2; j * i < limit; j++) {
        visited[j * i] = true;
    }
  }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    int n; cin >> n;

    while (n--) {
        ll num; cin >> num;
        if (tprimes.count((num)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}