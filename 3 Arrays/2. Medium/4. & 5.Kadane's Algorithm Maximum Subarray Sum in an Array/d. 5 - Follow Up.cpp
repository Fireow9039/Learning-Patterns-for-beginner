/**** 
 Kadane's Algorithm : Maximum Subarray Sum in an Array
 
Follow Up 
 ****/
 
 
#include<bits/stdc++.h>
using  namespace std;


long long maxSubarraySum (vector<int> &arr, int n){
    long long maxi= LONG_MIN; //maximum Sum
    long long sum=0;
    
    int start =0;
    int ans_start=-1, ans_end=-1;
    
    for(int i=0; i<n;i++){
        if(sum==0){
            start = i; //starting index
        }
        
        sum= sum + arr[i]; 
        
        if(sum>maxi){
            maxi= sum;
            ans_start=start;
            ans_end=i;
        }
        
        //if sum<0; discard sum calculated
        
        if(sum<0){
            sum=0;
        }
    }
    
    //printing the subarray;
    cout<<"The Subarray is : [ ";
    for(int i=ans_start; i<=ans_end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    
    return maxi;
} 
 
int main(){
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    int n= arr.size();
    
    long long maxSum = maxSubarraySum(arr, n);
    
    cout<<"The MAximum sum of subarray is "<<maxSum;
}