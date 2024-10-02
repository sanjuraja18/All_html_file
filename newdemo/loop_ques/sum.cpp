//write a program to sum all the entered value until user enter 0 to stop
#include <iostream>
using namespace std;
int main(){
    int number = 0;
    int total_sum =0;
    cout <<"Enter number to sum(enter 0 to stop):" <<"\n";
    do{
        cin >> number;
        total_sum += number;
    }while (number != 0);
    cout << "The total number is : " << total_sum << "\n";
    return 0;
}