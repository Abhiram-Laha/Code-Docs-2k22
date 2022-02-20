//Calculate Power of a Number
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float base, exponent, result;
    cout<<"Enter Base : ";
    cin>>base;

    cout<<"Enter Exponent : ";
    cin>>exponent;

    result = pow(base,exponent);

     cout<<"\nThe value of "<<base<<" ^ "<<exponent<<" = "<<result<<endl;


    

return 0;
}