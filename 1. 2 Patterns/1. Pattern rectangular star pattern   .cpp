/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void pattern1(int n)
{
    int i,j;
    for(i=0;i<n;i++){
        
		for(j=0;j<n;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	} 
}


int main()
{
    int n;
    
    cin>>n;
    pattern1(n);
    return 0;
}
