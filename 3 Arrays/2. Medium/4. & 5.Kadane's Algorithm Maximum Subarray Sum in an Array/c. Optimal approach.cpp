/**** 
 Kadane's Algorithm : Maximum Subarray Sum in an Array
 
 better approach
 ****/
 
 #include<bits/stdc++.h>
 using namespace std;
 
 int maxSubArraySum(vector<int> &arr, int n){
    long long maxi = LONG_MIN;
    long long sum=0;
    for(int i=0;i<n;i++){
        
        sum = sum+arr[i];
            
        maxi = max(maxi,sum);
        
        if(sum>maxi){
            maxi = sum;
        }
        
        //if sum is smaller than 0 then discard the sum
        if(sum < 0){
            sum = 0;
        }
        
        
    }
    return maxi;
 }
 
 int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=arr.size();
    int maxSum = maxSubArraySum (arr, n);
    
    cout<<"The Maximum sum of the subarray is : "<<maxSum<<endl;
    
    
    
 }