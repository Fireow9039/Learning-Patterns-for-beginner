#include <bits/stdc++.h>
using namespace std;

void pattern19 (int n)
{
    int i,j;
    int spaces;
    
    spaces=2*n - 2;
    
    for(int i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        for(j=0;j<spaces;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        spaces-=2;
        cout<<endl;
    }
    
    spaces = 2;
    
    
    for(int i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<"*";
        }
        
        for(j=0;j<spaces;j++){
            cout<<" ";
        }
           
        
        for(j=0;j<n-i-1;j++){
            cout<<"*";
        }
        spaces+=2;
        cout<<endl;
    }
	
}
int main()
{
    int n;
    
    cin>>n;
    pattern19(n);
    return 0;
}
