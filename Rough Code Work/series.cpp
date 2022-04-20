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
    n=3;
    
    float sum=0;
    for (int i=2; i<=n; i++){

        int inner=pow(n,i);
        sum+=pow(fac(i),i)/( fac(i)*  log10(inner)  );
    }

    int a= sum*10000;

    int asum=0,rem;
    while(a>0){
        rem=a%10;
        asum+=rem;
        a/=10;
    }

    cout<<"\nSum : "<<sum<<" G "<<asum;

return 0;
}