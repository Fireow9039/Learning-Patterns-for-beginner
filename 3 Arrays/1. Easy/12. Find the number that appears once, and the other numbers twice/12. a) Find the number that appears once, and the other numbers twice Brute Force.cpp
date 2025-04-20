/******************************************************************************

Find the number that appear once, the other nuber twice

Brute Force Method

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    //size of the array;
    int n=arr.size();
    
    //run the loop for selecting the elements;
    
    for(int i=0;i<n;i++){
        int num= arr[i];
        int count=0;
        
        //find the occurrence using linear search
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        
        //if the occurrence is 1 return num;
        if(count==1) return num;
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
