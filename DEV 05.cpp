#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month >= 3 && month <= 5) {
        cout << "Season is Spring";
    }
    else if (month >= 6 && month <= 8) {
        cout << "Season is Summer";
    }
    else if (month >= 9 && month <= 11) {
        cout << "Season is Autumn";
    }
    else if (month == 12 || (month >= 1 && month <= 2)) {
        cout << "Season is Winter";
    }
    else {
        cout << "Invalid month number";
    }

    return 0;
}

