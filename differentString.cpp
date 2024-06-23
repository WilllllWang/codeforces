#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        // check if valid
        bool flag = false;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] != s[0]) {
                // swap and flag
                char temp = s[j];
                s[j] = s[0];
                s[0] = temp;
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else 
            cout << "NO" << endl;   
    }
    return 0;
}