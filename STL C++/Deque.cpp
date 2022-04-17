#include<iostream>
#include<deque>      // <deque> -> Header File to use deque's Functions

using namespace std;
                    
 
int main(){

    deque<int> arr;          // deque<int> -> data Inlisacition

    arr={1,2,3,4,5,6};
    
    
    cout<<"Original Array (arr): ";

    for (int i=0; i<arr.size(); i++){ 
        cout<<arr[i]<<" ";   // we can also use arr.at()
    }

    cout<<"\n\nArray Max Size (arr)  : "<<arr.max_size();   // max_size() -> Returns the maximum number of elements that a deque container can hold.

    

    arr.push_front(25);          // push_front() & push_back() -> Insert new element in first and last resp.
    arr.push_back(27);

   
     



    cout<<"\n\nArray after push_front() & push_back() : ";
     for (int i=0; i<arr.size(); i++){ 
        cout<<arr[i]<<" ";
    }



    if (arr.empty()){           // empty() -> check is array is empty or not
        cout<<"\n\nArray is Empty.";
    }
    else{
        cout<<"\n\nArray is not Empty.";
    }


   deque<int> arr1;
   arr1.push_back(21);
   arr1.push_back(37);
   arr1.push_back(42);
   arr1.push_back(28);
   arr1.push_back(54);

   cout<<"\n\nNew Array (arr1) : ";
     for (int i=0; i<arr1.size(); i++){ 
        cout<<arr1[i]<<" ";
    }


    arr1.swap(arr);         // swap() -> its simply swap arrays with each other
    cout<<"\n\nSwapped Array (arr1)  : ";
     for (int i=0; i<arr1.size(); i++){ 
        cout<<arr1[i]<<" ";
    }


    cout<<"\n\nFirst Element of Array (arr) : "<<arr.front();      // front() & back() -> Gives first and last element of the Array
    cout<<"\nLast Element of Array (arr) : "<<arr.back();



    cout<<"\n\nArray before pop (arr1)  : ";
     for (int i=0; i<arr1.size(); i++){ 
        cout<<arr1[i]<<" ";
    }
    
    arr1.pop_back();          // pop_back() & pop_front() -> delete element from back and front
    arr1.pop_front();

    cout<<"\nArray after pop (arr1)  : ";
     for (int i=0; i<arr1.size(); i++){ 
        cout<<arr1[i]<<" ";
    }



    arr1.erase(arr1.begin(),arr1.begin()+4);        // erase(argument1,argument2) -> erases elemets within a range 

    cout<<"\n\nArray after Eraseing from 0 to 4 (arr1)  : ";
     for (int i=0; i<arr1.size(); i++){ 
        cout<<arr1[i]<<" ";
    }


    arr.clear();         // clear() -> Deletes all elements of the Array

    cout<<"\n\nAfter Clear Function Used : ";

    if (arr.empty()){           // empty() -> check is array is empty or not
        cout<<"\nArray is Empty.";
    }
    else{
        cout<<"\nArray is not Empty.";
    }

    return 0;

}