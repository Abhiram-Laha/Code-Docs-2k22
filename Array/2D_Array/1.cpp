#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        
        if(abs(arr[i+1]-arr[i])>m){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    
    
    
    return 0;
}