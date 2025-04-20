/******************************************************************************

Find the number that appear once, the other nuber twice

optimal approach

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    //size of the array;
    int n=arr.size();
    
    int xorr = 0;
    for(int i=0;i<n;i++){
        xorr = xorr^arr[i];
    }
    return xorr;
    
}

int main()
{
    vector<int> arr = {4,1,2,1,2};
    int ans= getSingleElement(arr);
    cout<<"The Single Element is : "<<ans<<endl;
    
    return 0;
}