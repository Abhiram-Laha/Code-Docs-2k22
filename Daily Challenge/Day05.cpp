/* Find Largest Number Among Three Numbers */
#include<iostream>
using namespace std;
 
int main(){
    int arr[3];

    for (int i=0; i<3; i++){
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>arr[i];
    }

    cout<<"\nThe Largest Number : ";

    if (arr[0]>arr[1] & arr[0]>arr[2]){
        cout<<arr[0];
    }
    else if (arr[1]>arr[0] & arr[1]>arr[2]){
        cout<<arr[1];
    }
    else{
        cout<<arr[2];
    }



return 0;
}