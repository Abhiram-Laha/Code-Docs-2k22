#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
                
 
int main(){
    int arr[6]={5,6,3,2,1,8};
    int n=6;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}