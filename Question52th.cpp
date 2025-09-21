#include <iostream>
using namespace std;
void pattern51() {
    int rows = 4;
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}


void pattern52() {
    int rows = 4;
    for (int i = rows; i >= 1; --i) {
        // Print leading spaces
        for (int space = 0; space < rows - i; ++space) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout <<endl;
    }
}

int main() {
    cout << "Pattern 51:" << endl;
    pattern51();
    cout << "\nPattern 52:" << endl;
    pattern52();
    return 0;
}
