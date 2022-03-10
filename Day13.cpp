//Check Armstrong Number
#include<iostream>
using namespace std;
 
int main(){
    int rem,n;

    cout<<"Enter a Number : ";
    cin>>n;

    int ornum=n;

    int armsum=0;

    while(n!=0){
        rem=n%10;
        armsum=rem*rem*rem+armsum;
        n/=10;
    }
    cout<<endl;

    if (ornum==armsum){
        cout<<ornum<<" is a Armstrong Number.";
    }
    else{
        cout<<ornum<<" is not a Armstrong Number.";
    }


    

return 0;
}