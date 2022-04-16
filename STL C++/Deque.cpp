#include<iostream>
#include<deque>      // <deque> -> Header File to use deque's Functions

using namespace std;
                    
 
int main(){

    deque<int> arr;          // deque<int> -> data Inlisacition

    arr={1,2,3,4,5,6,7,8,9,10,11,12};
    
    
    cout<<"Array : ";
    for (int i=0; i<arr.size(); i++){ 
        cout<<arr[i]<<" ";
    }





    return 0;

}
    





