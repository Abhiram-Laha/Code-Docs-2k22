#include<iostream>
#include<string.h>
using namespace std;

class Person{               //class declarition


    private:
    int x;

    public:        //public access specifier

    string name;
    int age;

    bool check(age){
        age=x;
        if (x<=90 && x>=5){
            return true;
        }
        else{
            return false;
        }
    }

};
 
int main(){

    Person p1;

    p1.name="Rajesh";
    p1.age=91;

    if(p1.check(p1.age)){
        cout<<p1.name<<" : "<<p1.age<<endl;
    }

return 0;
}