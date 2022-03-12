#include<iostream>
using namespace std;

void table(int n);
 
int main(){

    int x;
    cout<<"Enter a Number : ";
    cin>>x;

    cout<<"\nTable of "<<x<<" : \n"<<endl;

    table(x);

return 0;
}


void table(int n){
    for (int i=1; i<=10; i++){
        cout<<i<<" x "<<n<<" = "<<i*n<<endl;
    }
}