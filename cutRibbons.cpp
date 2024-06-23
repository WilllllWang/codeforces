#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int total = 0;
    int count = 0;
    while (total < n) {
        total += c;
        count ++;
    }
    total -= c;
    count --;
    cout << count << endl;

    return 0;
}

