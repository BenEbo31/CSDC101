#include <iostream>
using namespace std;

int main(){

    int x = 0 , y = 0;
    char move;

        cout << "Enter your move (W,A,S,D): ";
        cin >> move;

    switch (move){
        case 'W':
        case 'w':
            y += 1;
            break;

        case 'A':
        case 'a':
            x -= 1;
            break;

        case 'S':
        case 's':
            y -= 1;
            break;

        case 'D':
        case 'd':
            x += 1;
            break;

    default:
        cout << "Sorry but this is an invalid move" << endl;

        return 0;
    
    }
        cout << " The location of the Player is ( " << x << ",  " << y << " )" << endl;

    return 0;

}
