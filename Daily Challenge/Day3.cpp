//swap
#include<iostream>
using namespace std;
 
int main(){
    int arr[2];

    for (int i=0; i<2; i++){
        cout<<"Enter : ";
        cin>>arr[i];
    }

    int temp=arr[1];
    arr[1]=arr[0];
    arr[0]=temp;

    cout<<"Updated Swaped Number : ";
    for (int i=0; i<2; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}