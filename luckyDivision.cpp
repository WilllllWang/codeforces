#include <iostream>
using namespace std;
bool islucky(int n);

int main() {
    int n; cin >> n;
    bool condition = false;
    // Check if any divisor is lucky
    for (int i = 1; i < n + 1; ++i) {
        if (islucky(i) && ((n % i) == 0)) {
            condition = true;
        }
    }
    if (condition) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


// Check if num only contain 4 or 7
bool islucky(int n) {
    int temp = n;
    int remain;
    while (temp > 0) {
        remain = temp % 10;
        if (remain != 4 && remain != 7) 
            return false;
        temp /= 10;
    }
    return true;
}

