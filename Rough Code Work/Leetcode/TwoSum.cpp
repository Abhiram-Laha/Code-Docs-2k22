#include<iostream>
using namespace std;
 
int main(){
    int arr[5]={2,11,15,3,7};
    int tar=9;

    int f1,f2;

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if((arr[i]+arr[j])==tar){
                f1=i;
                f2=j;
            }
        }
    }

    cout<<f1<<" "<<f2;

return 0;
}