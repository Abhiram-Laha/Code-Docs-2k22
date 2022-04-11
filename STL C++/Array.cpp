#include<iostream>
#include<array>           // including array header file

using namespace std;
 
int main(){

    array<int,6> arr1={2,8,9,3,7,5};
    array<int,6> arr2={1,2,3,4,5,6};

    
    

    cout<<"Second Element : "<<arr1.at(1)<<endl;          // at() to access particular elemet by index number

    cout<<"Size of the Array : "<<arr2.size()<<endl;     // size() -> capacity/Size of array

    if (arr2.empty()==0){                 // empty() -> is array empty or not
        cout<<"Array is not Empty"<<endl;
    }

    cout<<"First Element of Array : "<<arr1.front()<<endl;            // front() & back() -> Gives the first and last elements of a array
    cout<<"Last Element of Array : "<<arr1.back()<<endl;



    cout<<"\n\nBefore Swap"<<endl;

    cout<<"Array 1 : ";
    for (int i=0; i<6; i++){
        cout<<arr1.at(i)<<" ";
    }
    cout<<"\nArray 2 : ";
    for (int i=0; i<6; i++){
        cout<<arr2.at(i)<<" ";
    }

    arr1.swap(arr2);          // swap() -> it swaps array with eachother, but both arrays must have same size()



    cout<<"\n\nAfter Swap"<<endl;

    cout<<"Array 1 : ";
    for (int i=0; i<6; i++){
        cout<<arr1.at(i)<<" ";
    }
    cout<<"\nArray 2 : ";
    for (int i=0; i<6; i++){
        cout<<arr2.at(i)<<" ";
    }

return 0;
}