#include<iostream>
using namespace std;
 
int main(){
    int arr[5]={1,2,0,7,2};
    
    for (int i = 0; i <5; i++)
    {
        int sum=0;
        for(int j=i; j<5; j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
        
    }
    

return 0;
}