/******************************************************************************
Find the Majority Element that occurs more than N/2 times Better Approach
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int majorityelement(vector<int> arr){
    int n= arr.size();
    map<int, int>mpp;
    
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        
        
    }
    
    for(auto it : mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    
    return -1;
}



int main(){
    vector<int> arr= {2,2,1,1,1,2,2};
    
    int ans = majorityelement(arr);
    
    cout<<"The Majority Element is "<<ans<<endl;
    

}