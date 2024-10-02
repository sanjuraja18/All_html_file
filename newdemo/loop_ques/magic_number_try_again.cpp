#include <iostream>
using namespace std;
int main(){
    int magic_number = 5;
    int number;
    while (true)
    {
        cout <<"Enter a number(0 to stop):";
        cin >> number;
        if (number == 0){
            cout << "Stopped program"<<"\n";
            break;
        }
        if (number == magic_number){
        cout <<"Winner!"<<"\n";
        break;
        }
        else{
            cout <<"try again."<<"\n";
        }
        return 0;
    }
    
}