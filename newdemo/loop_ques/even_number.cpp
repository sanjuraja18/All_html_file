/* write a program to print the sum of the even value. entered by user . until 
user enter 0 to stop */
#include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    while (true)
    {
        cout << "enter a number (0 to stop):";
        cin >> number;
        if (number == 0){
            break;
        }
        if (number%2 == 0){
            sum += number;
        }
    }
    cout << " The sum of all even number entered is : " << sum <<"\n";
    return 0;
    

}