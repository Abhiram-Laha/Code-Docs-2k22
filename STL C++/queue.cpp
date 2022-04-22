#include<iostream>
#include<queue>        // queue header file included


using namespace std;

void showdt(queue<int> g){

     while (!g.empty()) {
        cout<<" " << g.front();
        g.pop();
    }
    cout << '\n';
}
 
int main(){

    queue<int> num;

    num.push(7);
    num.push(2);
    num.push(9);
    num.push(1);
    num.push(3);
    num.push(11);
    num.push(12);
    

    cout<<"\nSize of the Queue : "<<num.size();

    cout<<"\nQueue : ";
    showdt(num);

    num.pop();
    
    cout<<"\nQueue after pop : ";
    showdt(num);


return 0;
}