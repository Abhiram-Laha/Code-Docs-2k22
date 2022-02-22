//Prime or Not
#include<iostream>
using namespace std;

bool isprime(int n){
    if (n<=1){
        return false;
    }
    else{
        for (int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
    

    }
    return true;
}
 
int main(){
    int n;
    cout<<"Enter a Number : ";

    cin>>n;

    if(isprime(n)){
        cout<<"\nThe Number is an Prime Number.";
    }
    else{
        cout<<"\nThe Number is not a Prime Number.";
    }


return 0;
}