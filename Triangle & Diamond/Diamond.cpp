#include <iostream>
using namespace std;

int main() {

    for (int row = 1; row <= 5; row++) {
        for (int column = 5; column > row; column--)
            cout << " ";
        for (int B = 1; B <= 2 * row - 1; B++)
            cout << "*";
        cout << endl;
    }


    for (int row2 = 4; row2 >= 1; row2--) {
        for (int column2 = 5; column2 > row2; column2--)
            cout << " ";
        for (int B = 1; B <= 2 * row2 - 1; B++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
