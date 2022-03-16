#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
 
int main(){
    srand(time(0));

    int a=(rand()%50);
    int b=(rand()%50);


    cout<<"\nValue of a : "<<a;
    cout<<"\nValue of b : "<<b;

    int sum=a+b;

    cout<<"\n\nSUM : "<<sum<<endl;

return 0;
}