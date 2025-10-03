#include <iostream>
using namespace std;

int main(){

    int temperature;
        cout << "Enter today's temperature in Celsius: ";
        cin >> temperature;

    if (temperature >= 30){
        cout << "Woah it's very hot today! Lemonade costs $0.80 today." << endl; 
    }

    else {
        cout << "It's pretty warm today, Lemonade costs $1.00 today. " << endl;
    }

    return 0;

}
