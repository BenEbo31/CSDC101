#include <iostream>
using namespace std;

int main(){

    int choice;
    char loop;

    do {

        cout << "\n=== Lemonade Financing & PlayerMove ===\n" << endl;
        cout << "1. Basic Pricing Decision" << endl;
        cout << "2. Weather-Based Discounts" << endl;
        cout << "3. Inventory Check" << endl;
        cout << "4. Bulk Purchase Discount" << endl;
        cout << "5. Player Movement" << endl;
        cout << "\nWhat problem do you want to see (1-5)?: ";
        cin >> choice;

        
        switch (choice) {
            
            case 1: {
                
                cout << "\n==== Problem 1: Basic Pricing Decision ====\n" << endl;

                int balance;
                    cout << "Enter your current money balance: ";
                    cin >> balance;

                 if (balance >= 1){
                    cout << "\nEnjoy your Lemonade! " << endl; 
                
                } else {
                    cout << "\nSorry, you need more money " << endl;

                } 
                break;

            }

            case 2: {
                
                cout << "\n==== Problem 2: Weather-Based Discounts ====\n" << endl;

                int temperature;
                    cout << "Enter today's temperature in Celsius: ";
                    cin >> temperature;

                if (temperature >= 30){
                    cout << "\nWoah it's very hot today! Lemonade costs $0.80 today.\n" << endl; 

                } else {
                    cout << "\nIt's pretty warm today, Lemonade costs $1.00 today.\n" << endl;

                }

                break;

            }

            case 3: {
                
                cout << "\n==== Problem 3: Inventory Check ====\n" << endl;

                int lemonade1 , lemonade2;
                    cout << "How many lemons do you have?: ";
                    cin >> lemonade1;
                    cout << "How many cup of sugars do you have?: ";
                    cin >> lemonade2;

                if (lemonade1 <= 0){
                    cout << "\nI'm sorry but you can't make lemonades.\n" << endl; 
                }

                else if (lemonade2 <= 0) {
                    cout << "\nI'm sorry but you can't make lemonades.\n" << endl; 
                
                } else {
                    cout << "\nNice! You're ready to make and sell lemonades!\n" << endl;
                
                }

                break;
            }

            case 4: {
                
                cout << "\n==== Problem 4: Bulk Purchase Discount ====\n" << endl;

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
                    cout << "\nTotal cost is: $" << TotalCost << endl;
                    
                break;
            
            }

            case 5: {
                
                cout << "\n==== Problem 5: Player Movement ====\n" << endl;

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
                        cout << "\nSorry but this is an invalid move\n" << endl;
                        break;

                    }

                    cout << "\nThe location of the Player is ( " << x << ",  " << y << " )" << endl;
                    break;

            }

                default:
                    cout << "\nSorry but this is an invalid choice\n" << endl;
                    break;
        }

                cout << "\nDo you want to choose again? (Y/N): ";
                cin >> loop;

            if (loop != 'Y' && loop != 'y' && loop != 'N' && loop != 'n') {
                cout << "\nSorry but this is an invalid choice.\n";
                loop = 'N';
        }

    } while (loop == 'Y' || loop == 'y');

        cout << "\nThank you for using the program!\n";


    return 0;
}
