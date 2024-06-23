#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int less = min(a, b);
        int more = max(a, b);

        if (less < c  && c < more && (d < less || d > more)) {
            cout << "YES" << endl;
        }
        else if (less < d && d < more && (c < less || c > more)) {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
