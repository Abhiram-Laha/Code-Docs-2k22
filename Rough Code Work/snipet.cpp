#include<iostream>
using namespace std;
 
int main(){
    int A=-9,B=1;
        cin>>A>>B;
        if (-A<B){
            cout<<A<<"All is Well."<<endl;
        }
        else if(B<A){
            cout<<B<<"Is Well All."<<endl;
        }
        else if(B-A>B){
            cout<<"Well All is"<<endl;
        }
        cout<<"The sum is "<<A+B<<"."<<endl;
        

return 0;
}