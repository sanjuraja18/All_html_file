#include <iostream>
using namespace std;
int main(){
    int strat; 
    int end;
    cout <<"Enter the starting point: " <<"\n";
    cin >>strat;
    cout << "Enter the end point:"<<"\n";
    cin >>end;
    int i;
    int sum = 0;
    int count = 0;
    for (i=strat; i <= end; i++){
        if(i %2 ==0){
            sum += i;
            count ++;
        }
    }
    cout <<"sum of even value:" <<sum <<"\n";
    cout <<"count of even value:"<<count <<"\n";
    return 0;


}