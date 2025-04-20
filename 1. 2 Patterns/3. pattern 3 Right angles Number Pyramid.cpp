/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    int i,j;
    
    for(i=0;i<n;i++){
        
		for(j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
		
	} 
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern3(n);
    return 0;
}
