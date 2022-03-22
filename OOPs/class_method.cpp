#include<iostream>                                                      //* Class Methods
#include<string.h>

using namespace std;                         //! Inside Class Defination  & Outside Class Defination

class car{

    public:           //?  Acess Specifier

    string Model; 
    int topspeed;                // ! Object Properties
    float price;


    //void type(float price);                //! Outside Define           //! Object Behaviour


    int detail(){
        cout<<"\nCAR DETAILS : \n\n";
        cout<<"Car Name : "<<Model<<endl;               //? Inside 
        cout<<"Car Topspeed : "<<topspeed<<" km/hr"<<endl;
        cout<<"Car Price : "<<price<<endl;

        return 0;

    }

};

// void car::type(float price){                          // Outside Class Defining  
//     if (price>20000){
//         cout<<"\nLuxury Car.";
//     }
//     else if (price<5000){
//         cout<<"\nAffordable Car.";
//     }
//     else{
//         cout<<"\nModerate Car";
//     
// }
//                                                                          
 
int main(){

    car honda;            //Object Creation

    honda.Model="RTX-500";
    honda.topspeed=250;            //Data Input
    honda.price=9000;


    honda.detail();                   //! Behaviour Calling

    //cout<<"Car Class : "<<honda.type(honda.price);

    



return 0;
}