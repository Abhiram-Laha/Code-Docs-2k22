#include<iostream>
using namespace std;
 
int main(){
    int divisor,dividend,qoutient,remainder;

    cout<<"Enter Dividend : ";
    cin>>dividend;

    cout<<"Enter Divisor : ";
    cin>>divisor;

    qoutient=dividend/divisor;
    remainder=dividend%divisor;

    cout<<"\nReminder : "<<remainder;
    cout<<"\nQoutient : "<<qoutient;

return 0;
}