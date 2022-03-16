//SiZEOF()
#include<iostream>
#include<string>
using namespace std;
 
int main(){
    cout<<"Which Datatype Size you want to know, \n";
    cout<<"char / int / float / double / long long int(lli) : ";

    string value;
    cin>>value;
    cout<<endl;

    if (value=="char"){
        cout<<"The Length of Char : "<<sizeof(char);
    }
    else if(value=="int"){
        cout<<"The Length of Int : "<<sizeof(int);
    }
    else if(value=="float"){
        cout<<"The Length of Float : "<<sizeof(float);
    }
    else if(value=="double"){
        cout<<"The Length of Double : "<<sizeof(double);
    }
    else if(value=="lli"){
        cout<<"The Length of Long Long Int : "<<sizeof(long long int);
    }
    else{
        cout<<"INVAILD INPUT";
    }

return 0;
}