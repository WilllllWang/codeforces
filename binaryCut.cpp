#include <iostream>
using namespace std;

void solve();

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}
  

void solve() {
    string num;
    cin >> num;
    int n = num.size();
    int count = 1;
    bool flag = false; // If 01 combination exist, it is counted as one block or as the base
    for (int i = 0; i < n - 1; i++) {
        if (num[i] != num[i + 1])
            count++;
        if (num[i] == '0' && num[i + 1] == '1')
            flag = true;
    }

    cout << count - flag << endl;

}