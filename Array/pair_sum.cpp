//How do you find all pairs of an integer array whose sum is equal to a given number?

#include<iostream>
using namespace std;
 
int main(){
    int arr[50]={2,6,8,6,4,3,1,8,6,4,9,11,2,1,25,12,32,10,3,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter a Number : ";
    cin>>k;

    cout<<"Pairs are : ";
    for(int i=0; i<n; i++){
        int m=arr[i]+arr[i+1];
        if(m==k){
            cout<<"( "<<arr[i]<<","<<arr[i+1]<<" ) , ";
        }
        
    }

return 0;
}