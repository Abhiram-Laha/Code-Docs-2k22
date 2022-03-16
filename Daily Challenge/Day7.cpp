//Find Factorial
#include<iostream>
using namespace std;
 
int main(){

    int n;
    cout<<"Enter the Term : ";
    cin>>n;

    int fac=1;

    if (n==0){
        cout<<"\nFactorial of 0 : 1 ";
    }
    else{
        for (int i=1; i<=n; i++){
        fac=fac*i;
    }

    cout<<"\nFactorial of "<<n<<" : "<<fac;
    }

return 0;
}