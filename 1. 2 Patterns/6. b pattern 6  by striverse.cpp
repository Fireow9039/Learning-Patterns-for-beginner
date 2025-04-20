/******************************************************************************
This code is bit tricky 
   
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern6 (int n)
{
    int i,j;
    for(int i=0;i<n;i++){
        
        for(int j=n;j>i;j--){
            cout<<n-j+1;
        }
        cout<<endl;

    }
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern6(n);
    return 0;
}
