/******************************************************************************
This code is bit tricky 
binary number triangle pattern
   
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern11 (int n)
{
    int i,j;
    int start;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
           cout<<j+1;
           
        }
        for(j=0;j<2*(n-i-1);j++){
           cout<<" ";
           
        }
        for(j=i+1;j>=1;j--){
            cout<<j;
            
        }
        
        
        cout<<endl;
    }
   
     
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern11(n);
    return 0;
}
