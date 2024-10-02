#include <iostream>
using namespace std;
int main(){
    int number;
    int sum = 0;
    int count = 0;
    while (true){
        cout << "Enter a number(0 to stop): ";
        cin >> number;
        if (number == 0){
            break;
        }
        sum += number;
        count++;

    }
    cout <<"The sum of all numbers entered is: "<< sum <<"\n";
    cout <<"The count of all number entered is: "<< count <<"\n";
    return 0;

}