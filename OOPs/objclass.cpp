#include<iostream>
#include<string.h>
using namespace std;

class Hero{                //class templete;
    
    public:               //members are accessible from outside the class
    string Name;
    int Health;                   //Oject properties;
    char Level; 


    //Behaviour defining of Object

    void title(int n){
        cout<<"\nCharacter "<<n<<" Detail : \n\n";            
    }

    void show(){                                  //Behaviour() or Action()
        cout<<"Name : "<<Name<<endl;             
        cout<<"Health : "<<Health<<" %"<<endl;
        cout<<"Level : "<<Level<<endl;
    }

};
 


int main(){

    //Object Creation


    Hero Paul;    //Object 1

    Paul.Name="Paul";                     //oject detail input
    Paul.Health=70;
    Paul.Level='B';

    Paul.title(1);                 //Action() Call
    Paul.show();



    Hero Jake;    //Object 2

    Jake.Name="Jake";
    Jake.Health=85;
    Jake.Level='A';

    Jake.title(2);
    Jake.show();



    Hero Rock;                //object 3
    

    Rock.Name="Rock";
    Rock.Health=95;
    Rock.Level='A';

    Rock.title(3);
    Rock.show();



    


return 0;
}