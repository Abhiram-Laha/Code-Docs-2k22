//GCD/HCF
#include<iostream>
using namespace std;
 
int main(){
    int n1,n2;

    cout<<"Enter Number 1 : ";
    cin>>n1;
    cout<<"Enter Number 2 : ";
    cin>>n2;

    if (n1!=n2){
        if (n1>n2){
            n1=n1-n2;
        }
        else{
            n2=n2-n1;
        }
    }
    
    cout<<"\nThe GCD/HCF is : "<<n1;


return 0;
}