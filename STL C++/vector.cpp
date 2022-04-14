// Vector -> dynamic array 
//        -> Doubles its size
//        -> contigous Storage

#include<iostream>
#include<vector>        //Including vector header file : to use vector's functions

using namespace std;
 
int main(){

    vector<int> x={2,8};                 // data intialization

    cout<<"Array : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    cout<<"\nCapacity of Array : "<<x.capacity()<<endl;              // capacity() -> memory storage space allocated
    cout<<"Size of Array : "<<x.size()<<endl;                        // size() -> toal elements in the array


    x.push_back(7);                          // push_back() -> add element at the end of the array
    x.push_back(5);
    x.push_back(8);
    x.push_back(11);

    cout<<"\nArray : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    cout<<"\nCapacity of Array : "<<x.capacity()<<endl;            
    cout<<"Size of Array : "<<x.size()<<endl;




    x.pop_back();           // pop_back() -> delete element from the last of the array

    cout<<"\nArray : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    cout<<"\nCapacity of Array : "<<x.capacity()<<endl;            
    cout<<"Size of Array : "<<x.size()<<endl;



    cout<<"\nFirst Element of the Array : "<<x.front()<<endl;       // front() -> Gives 1st element of array
    cout<<"Last Element of the Array : "<<x.back()<<endl;         // back()  -> Last element of the Array



    vector<int> y={5,8,9,3,1};

    cout<<"\n\nBefore Swap : ";
    cout<<"\nArray x : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }
    
    cout<<"\nArray y : ";
    for (int i=0; i<x.size(); i++){
        cout<<y[i]<<" ";
    }


    x.swap(y);     // swap() -> it swaps two array with each other

    cout<<"\n\nAfter Swap : ";
    cout<<"\nArray x : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }
    
    cout<<"\nArray y : ";
    for (int i=0; i<x.size(); i++){
        cout<<y[i]<<" ";
    }


    
    y.clear();         // clear() -> Erases all elements, not its memory allocation

    cout<<"\n\nArray Size & Memory after using Clear Function \n";
    cout<<"\nCapacity of Array : "<<y.capacity()<<endl;            
    cout<<"Size of Array : "<<y.size()<<endl;


    x.rbegin();           // rbegin() -> It reverses the array

    cout<<"\nArray x after Reversing : ";
    for (int i=0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }








 

return 0;
}
