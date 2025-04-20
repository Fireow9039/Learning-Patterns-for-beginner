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
        
        if(i%2==0){
            start = 1;
        }
        else{
            start =0;
        }
        
        for(j=0;j<=i;j++){
           cout<<start;
           start= 1-start;
           
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
