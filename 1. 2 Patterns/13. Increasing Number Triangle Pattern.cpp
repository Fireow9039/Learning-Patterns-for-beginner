/******************************************************************************

Increasing Number Triangle pattern 

*******************************************************************************/
#include <iostream>

using namespace std;


void pattern13(int n){
    int i,j;
    int num=0;
    
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<num+1;
            num=num+1;
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cin>>n;
    
    pattern13(n);
    
    return 0;
}