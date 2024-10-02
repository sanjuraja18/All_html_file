/*write a program to check all the values. entered by user , the entered value. 
is even print. if the entered values is odd print. if the entered value is 0 stop */
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    while (true) {
        cout << "Enter a number (0 to stop):";
        cin >> number;
        if (number == 0){
            break;
        }
        if(number%2 == 0){
            cout << number << "is even"<< "\n";
        }
        else{
            cout << number << "is odd" << "\n";
        }
    }
    cout << "program stopped as the entered value was 0, " << "\n";
    return 0;

}