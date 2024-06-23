#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        int length = word.size();
        if (length > 10) {
            int num = length - 2;
            word = word[0] + to_string(num) + word[length-1];
        }

        cout << word << endl;
    }


    return 0 ;
}
// Check size 
// If greater than 10 then reserve 2 spots for start and end
// Use string concatenation