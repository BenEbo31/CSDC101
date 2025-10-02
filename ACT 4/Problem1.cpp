#include <iostream>
using namespace std;

int main(){

    int balance;
        cout << "Enter your current money balance: ";
        cin >> balance;

    if (balance >= 1){
        cout << "Enjoy your Lemonade! " << endl; 
    }

    else {
        cout << "Sorry, you need more money " << endl;
    }

    return 0;

}
