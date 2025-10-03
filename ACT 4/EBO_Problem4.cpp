#include <iostream>
using namespace std;

int main(){

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

    return 0;

}
