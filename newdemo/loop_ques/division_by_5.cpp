/*write a program to print all the number division by 5 from 1 to 100 */
#include <iostream>
using namespace std;
int main(){
    int i;
    for(i = 1; i <= 100; ++i){
        if (i % 5 == 0){
           cout <<i << "\n"; 
        }
         
    }
    return 0;
}