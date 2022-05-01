#include<iostream>
#include<queue>           // queue header is needed to form

using namespace std;

void showdt(priority_queue<int> n){        // function to print data 
    
    priority_queue<int> gb=n;
    while(!gb.empty()){
        for(int i=0; i<gb.size(); i++){
            cout<<gb.top()<<" ";
            gb.pop();
    }
    }
}

void showl(priority_queue<int ,vector<int>, greater<int>> l){        // function to print data 
    
    priority_queue<int ,vector<int>, greater<int>> gb=l;
    while(!gb.empty()){
        for(int i=0; i<gb.size(); i++){
            cout<<gb.top()<<" ";
            gb.pop();
    }
    }
}
 
int main(){

    priority_queue<int> marks;

    marks.push(25);
    marks.push(47);
    marks.push(36);           // push() -> is add elements in the queue
    marks.push(82);
    marks.push(91);
    marks.push(82);
    marks.push(17);
    marks.push(35);
    marks.push(55);
    
    cout<<"Maximum Heap : ";
    showdt(marks);

    (marks.empty()==1)?cout<<"\nEmpty":cout<<"\nNot Empty";         //empty() -> to check weather queue is empty or not

    
    //min heap

    priority_queue<int ,vector<int>, greater<int>> lowest;

    lowest.push(251);
    lowest.push(147);
    lowest.push(326);          
    lowest.push(812);
    lowest.push(911);
    
    cout<<"\nMinimum Heap : ";
    showl(lowest);


    cout<<"\nTop Element : "<<lowest.top();
    cout<<"\nSize of Queue : "<<lowest.size();

    
return 0;
}