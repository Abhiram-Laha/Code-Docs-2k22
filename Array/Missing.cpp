#include<iostream>
using namespace std;
 
int main(){
    int arr[100]={ 11,12,13,14,15,16,17,18,19,20,12};

    // for(int i=1; i<=100; i++){
    //     if(i!=100){
    //     arr[i]=i;
    //     }
    // }

    for(int i=0; i<=12; i++){
        if(arr[i+1]!=arr[i]+1){
            cout<<"\nMissing Number is "<<arr[i]+1;
            break;
        }
    }

    for(int i=0; i<13; i++){

        for(int j=1; j<13; j++){
            if(arr[i]==arr[j]){
                cout<<"\nRepeating Element is "<<arr[i];
            
            }
        }
        break;
    }



return 0;
}