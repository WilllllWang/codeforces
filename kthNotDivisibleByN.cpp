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
     
    void solve() {
        // Binary search
        ll n, k;
        cin >> n >> k;
        ll low = 1;
        ll high = INT_MAX;
        ll ans = 0;
        while (low <= high) {
            ll mid = (low + high) / 2; // Number at middle position
            ll position = mid - (mid / n); // mid - n is the occurence of n before mid
            // Actual position of the middle number
            if (position > k)
                high = mid - 1;
            else if (position < k)
                low = mid + 1;
            else {
                ans = mid;
                high = mid - 1; 
                // Don't jump out because mid could be divisible by n
            }
        }
        cout << ans << endl;
    }
     
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t; cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }
     

