#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int arr[5]={2,0,4,3,1};
    int mx=0;
    for(int i=0; i<5; i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" \n";
    }

return 0;
}