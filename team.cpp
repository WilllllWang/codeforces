#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) > 1) 
            count++;
    }
    cout << count << endl;


    return 0;
}



// Take mutiple inputs in one line a >> b >> c