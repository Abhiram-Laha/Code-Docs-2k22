//Given an unsorted array of integers, find the length of the longest consecutive elements sequence?

#include<iostream>
using namespace std;

void bubble(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
 
int main(){
    int arr[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42};
    int c;
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nRough : ";



    for(int i=0; i<n; i++){
        if((arr[i+1]==arr[i]+1) && ( (arr[i+1]-arr[i])==1)){
            cout<<(arr[i+1]-arr[i])<<" | ";
            c++;
            
        }
    }
    cout<<"\nLongest Subsequence : "<<c;

return 0;
}