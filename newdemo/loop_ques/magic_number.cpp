/*write a program which accept the magic number from the user prnt winner
 and stop if entered magic number . in this particular question magic number is */
 #include <iostream>
 using namespace std;
 int main(){
    int magic_number = 5;
    int number;
    while(true){
        cout <<"enter a number:";
        cin >>number;
        if (number == magic_number){
            cout <<"Winner!"<<"\n";
            break;
        }
    }
    return 0;

 }