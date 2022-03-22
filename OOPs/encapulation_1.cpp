#include<iostream>
#include<string>
using namespace std;

class bank{

    private:                 //inaccesible in outside world

    float balance;
    string name;
    int age;



    public:                    //Accesible by outside world

    void intake(string a,int b,float c){
        name=a;
        age=b;
        balance=c;
    }

    string show_name(){
        return name;
    }
    int show_age(){
        return age;
    }
    float show_balance(){
        return balance;
    }

};
 
int main(){

    bank p1,p2,p3;

    p1.intake("Abhiram",20,1970.65);
    p2.intake("Rajesh",24,6000.00);             //data intake 
    p3.intake("Rakesh",23,56007.87);



    cout<<"\n\nData of Person 1 : \n\n";       // person 1

    cout<<"Name : "<<p1.show_name();
    cout<<"\nAge : "<<p1.show_age();
    cout<<"\nBalance : "<<p1.show_balance();


    cout<<"\n\nData of Person 2 : \n\n";       // person 2

    cout<<"Name : "<<p2.show_name();
    cout<<"\nAge : "<<p2.show_age();
    cout<<"\nBalance : "<<p2.show_balance();


    cout<<"\n\nData of Person 2 : \n\n";       // person 3

    cout<<"Name : "<<p3.show_name();
    cout<<"\nAge : "<<p3.show_age();
    cout<<"\nBalance : "<<p3.show_balance();




    





return 0;
}