// Check Vowel or a Consonant Manually
#include<iostream>
using namespace std;
 
int main(){
    char c;
    cout<<"Enter a Character : ";
    cin>>c;
    cout<<endl;
    bool islower,isupper;

    islower=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isupper=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if (!isalpha(c)){
        cout<<"INVAILD, NON-ALPABETIC CHARACTER. ";
    }
    else if(islower==true || isupper==true){
        cout<<"Entered character is a Vowel.";
    }
    else{
        cout<<"Entered character is a Consonant.";
    }

return 0;
}