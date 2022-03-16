//Reverse a Number
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    int rem,rev=0;
    while(n!=0){
        rem=n%10;
        
        rev=rev*10+rem;

        n=n/10;

    }

    cout<<"\nThe Reversed Number is : "<<rev;

return 0;
}