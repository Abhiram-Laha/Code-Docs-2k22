#include<iostream>
using namespace std;

class add{
    private:                      //private

    int a,b,sum;

    public:

    void intake(){                   //outside access
        cin>>a>>b;
    }

    int result(){
        sum=a+b;

        cout<<sum;
    }



};
 
int main(){

    add apple;

    cout<<"Enter Two Numbers : ";
    apple.intake();

    cout<<"\nThe sum is : ";
    apple.result();

return 0;
}