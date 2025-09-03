#include <iostream>
using namespace std;

    int main(){

      char choice;
      char answer;

        do{

            cout << "Press 'a' to calculate for speed\n";
            cout << "Press 'b' to calculate for distance\n";
            cout << "Press 'c' to calculate for time\n";
            cout << "Enter your choice (a-c): ";
            cin >> choice;

                    if (choice == 'a') {
                     double distance, time, speed;

                        cout << "Enter distance in kilometers: ";
                        cin >> distance;
                        cout << "Enter time in hours: ";
                        cin >> time;

                        if (time != 0) {
                            speed = distance / time;
                            cout << "The speed is " << speed << " kph" << endl;

                        } else {
                            cout << "Time cannot be zero!" << endl;
                        }

                    } else if (choice == 'b') {
                        double speed, time, distance;

                        cout << "Enter distance in kilometers: ";
                        cin >> distance;
                        cout << "Enter speed in kph: ";
                        cin >> speed;

                      if (speed != 0) {
                            time = distance / speed;
                            cout << "The duration is " << time << " hour/s" << endl;

                        } else {
                            cout << "Speed cannot be zero!" << endl;
                        }

                    } else if (choice == 'c') {
                        double distance, speed, time;

                        cout << "Enter speed in kph: ";
                        cin >> speed;
                        cout << "Enter time in hours: ";
                        cin >> time;
                        distance = speed * time;
                        cout << "The distance is " << distance << " km" << endl;


                    } else {
                        cout << "Invalid choice, Please try again." << endl;
                }
                    
                cout << "\nDo you want to solve again? (y/n)";
                cin >> answer;

            } while (answer == 'y' || answer == 'Y');

            cout << "Thanks for using the calculator" << endl;

            return 0;
        }


    
