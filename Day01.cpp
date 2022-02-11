//C++ Program to Print Number Entered by User
#include<iostream>
using namespace std;
 
int main(){
    cout<<"Enter a Two digit Number : ";

    int num;
    cin>>num;

    int part=abs(num/5);
    
    cout<<"\nYou Entered : \n";
    cout<<part<<" + "<<part<<" + "<<part<<" + "<<part<<" + "<<part<<" = "<<part*5<<" + "<<num-part*5<<" = "<<part*5+(num-part*5);

return 0;
}