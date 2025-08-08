 #include <iostream>// input and output library
 using namespace std;// standard namespace for cin and cout 
 
 int main (){
     
     int num1, num2, product;
     
     cout<< "Enter a number: ";//output of entered number for num1
     cin>> num1;//user input of num1
     cout<< "Enter another number: ";//output of entered number for num2
     cin>> num2;//user input of num2
     product = num1 * num2;//set the value of product as num1 * num2
     cout<< "The product of the two number is: "<<product;//output product of num1 and num2
     
     return 0;
     
}
