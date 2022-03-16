#include<iostream>
#include<cstdlib>              //library used to generate random numbers
#include<ctime>
using namespace std;
 
int main(){
    srand(time(0));                   //truly random number whenever runned
                                            //time(0) is used to sleep the complier 

    for (int i=1; i<=10; i++){
        cout<<( rand() % 10 )<<endl;                //rand() function that generate random numbers
                                                               //modolus % function to specfiy a range of number eg. 1 to 6
    }

return 0;
}