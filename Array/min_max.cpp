#include<iostream>
using namespace std;
 
int main(){
    int arr[8]={2,8,6,4,7,5,3,6};

    int n=sizeof(arr)/sizeof(arr[0]);
    
    int min,max;
    min=INT16_MAX;
    max=INT16_MIN;

    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout<<"Max : "<<max<<"\nMin : "<<min;

return 0;
}