#include<iostream>
using namespace std;

int max(int a,int b);
 
int main(){

    int x,y;
    cout<<"Enter Two Numbers : ";
    cin>>x>>y;

    cout<<"Largest Number is : "<<max(x,y)<<endl;

return 0;
}


int max(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}