/******************************************************************************
This code is bit tricky 
   *
  ***
 *****
 
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    int i,j,avg;
    
    for(i=0;i<n;i++){
        
        
        
		for(j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(j=0;j<2*i+1;j++){
		    cout<<"*";
		}
		for(j=0;j<n-i-1;j++){
			cout<<" ";
		}
		
		
		cout<<endl;
		
	} 
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern7(n);
    return 0;
}
