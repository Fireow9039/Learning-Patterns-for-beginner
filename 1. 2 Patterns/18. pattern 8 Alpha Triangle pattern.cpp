#include <bits/stdc++.h>
using namespace std;

void pattern18 (int n)
{
    int i,j;
    char ch;
    for(i=0;i<n;i++){
        
        for(ch =('A' +n-1)-i;ch<=('A'+n-1);ch++){
           cout<<ch<<" ";
           
           
        }
        cout<<endl;
    }
   
     
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern18(n);
    return 0;
}
