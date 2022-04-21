#include<iostream>
#include<math.h>
using namespace std;

int fac(int x){
    int f=1;

    for (int i=x; i>=1; i-- ){
        f*=i;
    }
    return f;
}
 
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    long long int sum=0;
    for (int i=2; i<=n; i++){

        int inner=pow(n,i);
        sum+=fac(i)/( fac(i)*log10(inner)  );
    }

    int a= sum*10000;

    int asum=0,rem;
    while(a>0){
        rem=a%10;
        asum+=rem;
        a/=10;
    }

    cout<<"\nSum : "<<sum<<"\nSum of the Digits : "<<asum;

return 0;
}