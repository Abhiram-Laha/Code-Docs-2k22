//LCM
#include<iostream>
using namespace std;
 
int main(){
    int n1,n2;
    cout<<"Enter Two Numbers : ";
    cin>>n1>>n2;

    int t1=n1,t2=n2;

    while (t1!=t2){
        if (t1>t2){
            t1-=t2;
        }
        else{
            t2-=t1;
        }
    }

    int lcm=(n1*n2)/t1;

    cout<<"\nThe LCM of "<<n1<<" and "<<n2<<" is : "<<lcm;

return 0;
}