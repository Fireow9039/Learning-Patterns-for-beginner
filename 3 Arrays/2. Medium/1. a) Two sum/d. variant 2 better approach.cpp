/******************************************************************************
Two Sum : Check if a pair with given sum exists in Array
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target){
    unordered_map<int , int> mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int more_needed = target - num;
        if(mpp.find(more_needed)!=mpp.end()){
            return {mpp[more_needed], i};
        }
        mpp[num]=i;
    }
    return {-1, -1};
    
}

int main()
{
    vector<int> a = {2,6,5,8,11};
    int n= a.size();
    int target=14;
    
    vector<int> ans = twoSum(n, a, target);
    
    cout<<"This is the answer for variant 1: {"<<ans[0]<<","<<ans[1]<<"}"<<endl;
    return 0;
}