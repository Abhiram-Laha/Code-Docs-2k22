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

void sel_sort(int arr[],int n){           //Selection Sort
    int k,i,j;
    for(i=0; i<n; i++){
        k=i;
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);

    }
}
 
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter Values : ";
    inar(arr,n);

    sel_sort(arr,n);

    cout<<"\nSorted Array : ";
    ptar(arr,n);


return 0;
}