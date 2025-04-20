/*****************************************************************************
 1
 2 3 
 4 5 6 
 7 8 9 10

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void print14(int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        char ch='A';
         
        for(j=1;j<=i;j++)
        {
            
            cout<<ch;
            ch++;
    
        }
        cout<<endl;
    }
    
}


int main()
{
    int n;
    cin>>n;
    print14(n);
    

    return 0;
}