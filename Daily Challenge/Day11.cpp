//Multiply Two Numbers
#include<iostream>
using namespace std;

float multi(int a,int b){
    return a*b;
}
 
int main(){
    int x,y;
    cout<<"Enter Two Numbers : \n";
    cin>>x>>y;

    cout<<"\nThe Product of "<<x<<" and "<<y<<" is : "<<multi(x,y)<<endl;


return 0;
}