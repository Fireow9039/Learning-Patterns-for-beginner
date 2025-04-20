/******************************************************************************

Find the number that appear once, the other nuber twice

Better approach using Array Hasing

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    //size of the array;
    int n=arr.size();
    
    //Declare the Hash MAp;
    // HAsh the given array;
    
    map<int,int>mpp;
    
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    
    //
    
    
   //find the single element and return the answer
   for(auto it:mpp){
       if(it.second==1){
           return it.first;
       }
   }
    
    //this line will never execute if the array contains a single element.
    
    return -1;
    
}

int main()
{
    vector<int> arr = {4,1,2,1,2};
    int ans= getSingleElement(arr);
    cout<<"The Single Element is : "<<ans<<endl;
    
    return 0;
}
