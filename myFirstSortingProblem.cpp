#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        int b;
        cin >> a >> b;
        cout << min(a, b) << ' ' << max(a, b) << endl;
    }
    return 0; 
}