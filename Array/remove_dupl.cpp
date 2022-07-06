#include<iostream>
using namespace std;
 
int main(){
    int arr[8]={1,2,3,4,5,3,9,1};

    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
    }

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}