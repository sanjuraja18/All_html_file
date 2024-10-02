/*write a program to print all the odd number from 
1 to 20 hint check i%2 = 0 and print if is odd*/
#include <iostream>
using namespace std;
int main(){
    int i;
    for( i = 1; i <=20; ++i){
        if(i % 2!=0){
            cout <<i <<"";
            cout <<"\n";
        }
    }
    
}