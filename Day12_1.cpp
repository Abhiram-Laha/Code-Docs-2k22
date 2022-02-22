//Display Prime Numbers Between Two Intervals
#include<iostream>
using namespace std;
 
int main(){
    int begin,end;

    cout<<"Enter Beginning Term : ";
    cin>>begin;

    cout<<"Enter Last Term : ";
    cin>>end;

    int flag;

    cout<<"\nPrime Number Between "<<begin<<" and "<<end<<" : ";

    for (int i=begin; i<end; i++){
        
        //0 and 1 are not prime
        if (i==1 || i==0){
            continue;
        }

        flag=1;

        //checking for prime or not

        for (int j=2; j<=i/2; j++){

            if (i%j==0){
                flag=0;
                break;
            }
        }


        //flag 1 means prime
    //flag 0 means not prime

    

        if (flag==1){
        cout<<i<<" ";
        }
    }

    

    

return 0;
}