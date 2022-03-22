#include<iostream>
using namespace std;

class room{

    private:                    //private access specifier
    
    float length,width;

    public:                                //public access specifier

    void get(int a,int b){

        length=a;                        //internal function has the access , of the private data i.e implementation data
        width=b;
        
    }

    float area(){

        return length*width;
    }


    
};
 
int main(){

    float x,y;

    cout<<"Enter the Length & Width : ";
    cin>>x>>y;

    room hotel1;

    hotel1.get(x,y);

    cout<<"\nThe Area of the Room is : "<<hotel1.area()<<endl;


return 0;
}