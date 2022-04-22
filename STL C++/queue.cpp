#include<iostream>
#include<queue>        // queue header file included


using namespace std;

void showdt(queue<int> x){

    for(int i=1; i<=x.size(); i++){
        cout<<x.front()<<" ";
    }
}
 
int main(){

    queue<int> num;

    num.push(7);
    num.push(2);
    num.push(9);
    num.push(7);
    num.push(7);
    num.push(7);
    num.push(7);

return 0;
}