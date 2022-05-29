#include<iostream>
using namespace std;
 
int main(){
    int m,n;  //column vs row

    cout<<"\nEnter m*n : ";
    cin>>m>>n;

    int arr1[m][n], arr2[m][n],mul[m][n];
    
    //input Array 1
    
    cout<<"Enter Array 1 : \n";

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr1[i][j];
        }
    }

     //input Array 2
    cout<<"\nEnter Array 2 : \n";

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr2[i][j];
        }
    }
    
    //multiplication

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mul[i][j]=arr1[i][j]*arr2[i][j];
        }
    }

    cout<<"\nMultiplication of Matrix : \n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }




return 0;
}