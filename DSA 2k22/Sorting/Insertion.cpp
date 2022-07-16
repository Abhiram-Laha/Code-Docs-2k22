#include<iostream>
using namespace std;

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
 
int main(){
    // cout<<"Enter Size : ";
    // int n;
    // cin>>n;

    int arr[8]={2,3,4,5,7,6,1,8};
    // cout<<"\nEnter values : ";
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    //Insertion Sort

    for(int i=1; i<8; i++){
        int j=i;

        while(arr[j-1]>arr[j] && j>0){
            swap(arr[j-1],arr[j]);
            // int t=arr[j];
            // arr[j]=arr[j-1];
            // arr[j-1]=t;
            j--;
        }
    }

    cout<<"\nSorted Array : ";
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }


return 0;
}