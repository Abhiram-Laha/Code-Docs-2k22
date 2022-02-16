//Check Leap Year
#include<iostream>
using namespace std;
 
int main(){
    int year;
    cout<<"Enter Year : ";
    cin>>year;

    if (year%4==0){
        cout<<"\n"<<year<<" is a Leap Year.";
    }
    else{
        cout<<"\n"<<year<<" is not a Leap Year.";
    }

return 0;
}