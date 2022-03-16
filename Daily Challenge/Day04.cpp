//Check number is odd or even
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<endl;

    if (n%2==0){
        cout<<n<<" is a Even Number.";
    }
    else {
        cout<<n<<" is a Odd Number.";
    }

return 0;
}