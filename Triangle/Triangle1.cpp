#include <iostream>
using namespace std;

    int main(){
        
        int height;
        
            cout << "Enter height per row: ";
            cin >> height;
        
        for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        
            cout << endl;
        }
        
        return 0;
    }
