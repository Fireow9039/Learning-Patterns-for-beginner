/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    int i,j;
    
    for(i=n;i>0;i--){
        
		for(j=i;j>0;j--){
			cout<<"*"<<" ";
		}
		cout<<endl;
		
	} 
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern5(n);
    return 0;
}
