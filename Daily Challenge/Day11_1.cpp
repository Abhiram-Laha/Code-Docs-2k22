//Palindrome or Not
#include<iostream>
using namespace std;

int rev(int n){
    int revv=0,rem;

    while(n!=0){
        rem=n%10;
        revv=revv*10+rem;
        n/=10;
    }
    return revv;
}
 
int main(){

    int n;
    cout<<"Enter Number : ";
    cin>>n;

    //cout<<rev(n);

    if(rev(n)==n){
        cout<<"\nThe Given Number is Palindrome.";
    }
    else{
        cout<<"\nGiven Number is not a Palindrome.";
    }
    

return 0;
}