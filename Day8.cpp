//Fibonacci Series
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a Positive Number : ";
    cin>>n;

    int t1=0,t2=1, nextterm=0;
    nextterm=t1+t2;

    cout<<"\nThe Fibonacci Series : "<<t1<<" , "<<t2;

    for (int i=1; i<=n; i++){
        cout<<" , "<<nextterm;
        t1=t2;
        t2=nextterm;

        nextterm=t1+t2;
    }

return 0;
}