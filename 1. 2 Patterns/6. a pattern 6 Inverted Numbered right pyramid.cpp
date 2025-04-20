/******************************************************************************
This code is bit tricky 
the first loop is in increasing order but the second one is in decreasing order
12345
1234
123
12
1
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern6(int n)
{
    int i,j;
    
    for(i=n;i>0;i--){
        
		for(j=0;j<i;j++){
			cout<<j+1<<" ";
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
