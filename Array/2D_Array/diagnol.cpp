#include<iostream>
using namespace std;
 
int main(){
    int m,n,sum1=0,sum2=0;  //column vs row

    cout<<"\nEnter m : ";
    cin>>m;

    int arr[m][m];

    cout<<"\nEnter Array : \n";

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];

            if(i==j){
                sum1+=arr[i][j];
            }
            else if((i+j)==m-1){
                sum2+=arr[i][j];
            }
        }
    }

    cout<<"\nDiagonal :\n";

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){

            if( (i==j) || ((i+j)==m-1) ){
                cout<<arr[i][j]<<"\t";
            }
            else{
                cout<<" "<<"\t";
            }
        }
        cout<<"\n";
    }



    cout<<"\nLeft Diagonal Sum : "<<sum1;
    cout<<"\nRight Diagonal Sum : "<<sum2;


return 0;
}