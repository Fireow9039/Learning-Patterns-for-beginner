/******************************************************************************
This code is bit tricky 
   
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern9(int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--){
		for(j=i;j>0;j--){
		    cout<<"*";
		}
		cout<<endl;
		
	}
     
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern9(n);
    return 0;
}
