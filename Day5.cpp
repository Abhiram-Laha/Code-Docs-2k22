// Find All Roots of a Quadratic Equation
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float a,b,c;

    float dcr;

    cout<<"Enter coefficient a : ";
    cin>>a;
    cout<<"Enter coefficient b : ";
    cin>>b;
    cout<<"Enter coefficient c : ";
    cin>>c;

    dcr= (b*b)-4*a*c;
   // cout<<dcr;

    double root1,root2;

    if (dcr>0){
        root1=( -b + sqrt( dcr ) / 2*a );
        root2=( -b - sqrt( dcr ) / 2*a );

        cout<<"\nThe roots are real and different.";
        cout<<"\nRoot 1 = "<<root1;
        cout<<"\nRoot 2 = "<<root2;

    }

    else if (dcr==0){
        root1=( -b / 2*a);

        cout<<"\nThe roots are real and equal.";
        cout<<"\nRoot 1 = Root 2 = "<<root1;
    }

    else{
        float real,imag;

        real= (-b/2*a);
        imag=sqrt(-dcr)/(2*a);

        cout<<"\nRoots are complex and different.\n";
        cout<<"Root 1 = "<<real<<" + "<<imag<<"i"<<endl;
        cout<<"Root 2 = "<<real<<" - "<<imag<<"i"<<endl;
    }

return 0;
}