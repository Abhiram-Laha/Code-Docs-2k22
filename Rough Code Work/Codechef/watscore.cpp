#include <bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int sub,mark,max_marks[12],sum=0;
	    
	    for(int i=0; i<n; i++){
	        cin>>sub>>mark;
	        
	        max_marks[sub]=max(max_marks[sub],mark);
	    }
	    
	    for(int i=0; i<9; i++){
	       sum+=marks[i];
	        
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
