/******************************************************************************
Two Sum : Check if a pair with given sum exists in Array
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target){
    
    sort(arr.begin(), arr.end());
    int left =0; 
    int right = n-1;
    
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum== target){
            return "Yes";
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    
    
    
    return "No";
    
}

int main()
{
    vector<int> a = {2,6,5,8,11};
    int n= a.size();
    int target=14;
    
    string ans = twoSum(n, a, target);
    
    cout<<"This is the answer for variant 1: "<<ans<<endl;
    return 0;
}