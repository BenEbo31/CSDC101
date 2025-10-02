#include <iostream>
using namespace std;

int main(){

    int lemonade1 , lemonade2;
        cout << "How many lemons do you have?: ";
        cin >> lemonade1;
        cout << "How many cup of sugars do you have?: ";
        cin >> lemonade2;

    if (lemonade1 <= 0){
        cout << "I'm sorry but you can't make lemonades." << endl; 
    }

    else if (lemonade2 <= 0) {
        cout << "I'm sorry but you can't make lemonades." << endl; 
    }

    else {
        cout << "Nice! You're ready to make and sell lemonades!" << endl;
    }

    return 0;

}
