/******************************************************************************

reverse character Triangle pattern 

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void pattern15(int n)
{
    
      // Outer loop for the number of rows.
    for(int i=0;i<n;i++){
          
          
        for(char ch = 'A'; ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
              
        }
        cout<<endl;
          
      }
}


int main()
{
    int n;
    cin>>n;
    
    pattern15(n);
    
    return 0;
}