//Add two number
#include<iostream>
using namespace std;



 
int main(){
    int n;
    cout<<"Total Terms to Add : ";
    cin>>n;
    cout<<endl;

    int sum=0;
    int input;

    for(int i=1; i<=n; i++){
        
        cout<<"Enter Number "<<i<<" : ";
        cin>>input;
        sum=sum+input;
        //cout<<endl;
    }
    cout<<"\nTotal Sum of the Numbers : "<<sum;

    

    


return 0;
}