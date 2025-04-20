/******************************************************************************

reverse character Triangle pattern 

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void pattern16(int n)
{
    
      // Outer loop for the number of rows.
    for(int i=0;i<n;i++){
          
        char ch = 'A' +i;  
        for(char j = 0; j<=i;j++){
            cout<<ch <<" ";
              
        }
        cout<<endl;
          
      }
}


int main()
{
    int n;
    cin>>n;
    
    pattern16(n);
    
    return 0;
}