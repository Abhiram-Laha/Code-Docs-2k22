#include<iostream>
using namespace std;
 
int main(){
    int arr[8]={1,2,3,1,5,6,2,9};
    
    cout<<"Duplicate Elements : ";

    int n= sizeof(arr)/sizeof(arr[0]); 

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
    }



    

return 0;
}