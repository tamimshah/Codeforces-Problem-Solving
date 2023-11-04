#include <iostream>
using namespace std;
//Tahmid Shah Tamim
int main() {
    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;
        int division = 4;
        if (r <= 1399) {
            division = 4;
        } else if (r >= 1400 && r <= 1599) {
            division = 3;
        } else if (r >= 1600 && r <= 1899) {
            division = 2;
        } else if (r >= 1900) {
            division = 1;
        }
        cout << "Division " << division << endl;
    }
    return 0;
}

