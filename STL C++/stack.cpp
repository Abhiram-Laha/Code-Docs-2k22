/* Stack ->         Last in, First Go
             

 */

#include<iostream>
#include<stack>          // stack header file



using namespace std;
 
int main(){

    stack<string> s1;


    s1.push("Abhiram");            // push() -> It insert new element to the stack
    s1.push("is");
    s1.push("a");
    s1.push("Good");
    s1.push("Boy");

    
    cout<<"\nSize of the Stack : "<<s1.size();

    cout<<"\nTop Element of Stack : "<<s1.top();         // top() -> Gives the last added element of the stack

    s1.pop();         // pop() -> delete the last added element 

    cout<<"\nTop Element after Pop() : "<<s1.top();





    

return 0;
}