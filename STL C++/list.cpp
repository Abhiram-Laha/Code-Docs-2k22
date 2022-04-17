// list -> No direct Access

#include<iostream>
#include<list>       // List Header File 

using namespace std;

void showdt(list<int> x){
    for (int i:x){
        cout<<i<<" ";
    }
}
 
int main(){

    list<int> list1;   // data intialisation
    
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int arr1[n];
    
    cout<<"Enter : ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    list1.assign(arr1,arr1+n);       // assign() -> used to assign data to list
    
    cout<<"Original List : ";
    for (int i:list1){
        cout<<i<<" ";
    }

    list1.push_back(7);              // push()
    list1.push_back(21);              
    list1.push_back(32);              
    list1.push_front(5);

    cout<<"\n\nList after push() : ";
    showdt(list1);



    list1.pop_back();
    list1.pop_front();           //pop()

    cout<<"\n\nList after pop() : ";
    showdt(list1);

    list1.insert(list1.begin(),3,17);     // insert()

    cout<<"\n\nList after insert() : ";
    showdt(list1);


    list<int> list2={12,65,87,23,62,48,36,65,69};

    cout<<"\n\nNew List : ";
    showdt(list2);


    list2.reverse();               // reverse()

    cout<<"\n\nReversed List : ";
    showdt(list2);


    list2.sort();
    list1.sort();               // sort()

    cout<<"\n\nSorted List1 : ";
    showdt(list1);

    cout<<"\n\nSorted List2 : ";
    showdt(list2);












    


return 0;
}