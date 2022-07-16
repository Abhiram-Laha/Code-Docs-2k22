#include<iostream>
#include<string.h>
using namespace std;
 
int main(){
    string str="MCMXCIV";
    int sum=0;
    int l=8;

    for(int i=0; i<l; i++){

        switch (str[i]){
        case 'I':
            sum+=1;
            break;
        
        case 'V':
            sum+=5;
            break;
        
        case 'X':
            sum+=10;
            break;
        
        case 'L':
            sum+=50;
            break;
        
        case 'C':
            sum+=100;
            break;
        
        case 'D':
            sum+=500;
            break;
        
        case 'M':
            sum+=1000;
            break;

        }
        
        
    }
    cout<<sum;

return 0;
}