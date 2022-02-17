//Multiplication Table
#include<iostream>
using namespace std;
 
int main(){
    int n,term;
    cout<<"Table of : ";
    cin>>n;

    cout<<"Last term of Table : ";
    cin>>term;

    cout<<"\nMultiplication Table of "<<n<<" is :\n";

    for (int i=1; i<=term; i++){
        cout<<n<< " x "<<i<<" = "<<n*i<<endl;
    }

return 0;
}