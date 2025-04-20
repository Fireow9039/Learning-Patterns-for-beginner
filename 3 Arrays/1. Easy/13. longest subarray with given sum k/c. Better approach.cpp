/************
Longest sub array with sum K  better approach
*************/

#include<bits/stdc++.h>
using namespace std;

int LongestSubarray(vector<int> a, long long k){
    int n= a.size();
    
    map<long long, int> preSumMap;
    long long sum= 0;
    int maxLen = 0;
    for(int i=0;i<n;i++){
        //calculate prefix sum till ith index;
        sum +=a[i];
        
        //if the sum = k, update the maxLen:
        
        if(sum==k){
            maxLen= max(maxLen, i+1);
        }
        
        //calculate the remaining part i.e. x-k:
        
        long long rem = sum - k;
        
        // calculate the length and update maxLen:
        
        if(preSumMap.find(rem)!= preSumMap.end()){
            int len = i- preSumMap[rem];
            maxLen = max(maxLen, len);
            
        }
        
        // Finally, update the map checking the conditions:
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
        
        
    }
    
    return maxLen;
}


int main(){
    vector<int>a = {2,3,5,1,9};
    long long k=10;
    int len=LongestSubarray(a,k);
    cout<<"The length of the longest subarray is : "<<len<<"\n";
    return 0;
    
}