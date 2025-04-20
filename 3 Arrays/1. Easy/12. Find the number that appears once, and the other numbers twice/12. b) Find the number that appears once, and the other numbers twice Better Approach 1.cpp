/******************************************************************************

Find the number that appear once, the other nuber twice

Better approach using Array Hasing

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    //size of the array;
    int n=arr.size();
    
    //Find Maximum element:
    int maxi = arr[0];
    
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    
    //declare hash array of the size maxi + 1
    //And hash the given array;
    
    vector<int> hash(maxi+1, 0);
    for(int i=0; i<n;i++){
        hash[arr[i]]++;
    }
    
   //find the single element and return the answer
   for(int i=0;i<n;i++){
       if(hash[arr[i]]==1){
           return arr[i];
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
