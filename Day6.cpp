//Calculate Sum of Natural Numbers
#include<iostream>
using namespace std;
 
int main(){
    int term;
    cout<<"Enter the term : ";
    cin>>term;

    int sum=0;

    for (int i=1; i<=term; i++){
        sum=sum+i;
    }
    
    if (term<=0){
        cout<<"\nNegative or Zero Entered, Sum = 0";
    }
    else{
        cout<<"\nThe sum of Natural upto "<<term<<" is : ";
        cout<<sum;
    }


    

return 0;
}