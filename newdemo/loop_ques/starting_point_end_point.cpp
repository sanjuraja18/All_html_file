/*write a program which accepts the starting point and end point 
from the user and point the sum of all the values between the strating
 point and end point. strating point is inclusive and end point is exclusive*/
 #include <iostream>
 using namespace std;
 int main(){
    int strat;
    int end;
    int sum = 0;
    cout <<"Enter the starting point";
    cin >>strat;
    cout <<"Enter the end point";
    cin >>end;
    for(int i = strat; i < end; ++i){
        sum += i;
    }
    cout <<"sum = " << sum <<"\n";
    return 0;
 }