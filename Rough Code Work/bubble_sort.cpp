#include<iostream>
using namespace std;

void inar(int a[],int n){          //Array Input
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
 
void ptar(int a[],int n){              //Array Output
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void bubble(int arr[],int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
//dsvfutygfy7uwedyuiqawhdrgewy7ufghueisryehkueiwrygt
//sfdhjaugf7qw7eb caw6cyew7urv5b8wqa6yvg86feyb 6t
 
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter Values : ";
    inar(arr,n);

    bubble(arr,n);

    cout<<"\nSorted Array : ";
    ptar(arr,n);


return 0;
}