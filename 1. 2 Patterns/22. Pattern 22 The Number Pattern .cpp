#include <bits/stdc++.h>
using namespace std;

void pattern22(int n)
{
    int i,j;
    int num=1;
    for(i=0;i<2*n-1;i++){
        for(j=0;j<2*n-1;j++){
            int top,bottom,right,left;
            top = i;
            bottom = j;
            right = (2*n-2)-j;
            left = (2*n-2)-i;
            cout<<(n-min(min(top,bottom),min(left,right)))<<" ";
        }
        cout<<endl;
    }
    
      
}
int main()
{
    int n;
    
    cin>>n;
    pattern22(n);
    return 0;
}
