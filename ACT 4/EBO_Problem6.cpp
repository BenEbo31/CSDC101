#include <iostream>
using namespace std;

int main(){

    int choice;
        cout << "What problem do you want to see (1-5)?: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Problem 1: Basic Pricing Decision" << endl;

                int balance;
                    cout << "Enter your current money balance: ";
                    cin >> balance;

                 if (balance >= 1){
                    cout << "Enjoy your Lemonade! " << endl; 
                
                } else {
                    cout << "Sorry, you need more money " << endl;

                } 
                break;

            }

            case 2: {
                cout << "Problem 2: Weather-Based Discounts" << endl;

                int temperature;
                    cout << "Enter today's temperature in Celsius: ";
                    cin >> temperature;

                if (temperature >= 30){
                    cout << "Woah it's very hot today! Lemonade costs $0.80 today." << endl; 

                } else {
                    cout << "It's pretty warm today, Lemonade costs $1.00 today. " << endl;

                }

                break;

            }

            case 3: {
                cout << "Problem 3: Inventory Check" << endl;

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
                
                } else {
                    cout << "Nice! You're ready to make and sell lemonades!" << endl;
                
                }

                break;
            }

            case 4: {
                cout << "Problem 4: Bulk Purchase Discount" << endl;

                int cups;
                float Price = 1.0 , Discount = 0.0 , Total , TotalCost , TotalDiscount;

                    cout << "How many cups will you buy?: ";
                    cin >> cups;

                if (cups >= 10){
                    Discount = 0.20;
                }

                else if (cups >= 5 && cups <= 9){
                    Discount = 0.10; 
    
                } else { 
                    Discount = 0;

                }

                    Total = cups * Price;
                    TotalDiscount = Total * Discount;
                    TotalCost = Total - TotalDiscount;
                    cout << "Total cost is: $" << TotalCost << endl;
                    
                break;
            
            }

            case 5: {
                cout << "Problem 5: Player Movement" << endl;

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
                        break;

                    }

                    cout << " The location of the Player is ( " << x << ",  " << y << " )" << endl;
                    break;
            }

            default:
                cout << "Sorry but this is an invalid choice" << endl;
                break;
        
    }

    return 0;

}
