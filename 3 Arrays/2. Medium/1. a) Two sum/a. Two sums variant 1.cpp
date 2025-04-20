/******************************************************************************
Two Sum : Check if a pair with given sum exists in Array
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int>arr, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return "Yes";
            }
        }
    }
    return "No";
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    int n= a.size();
    int target;
    cout<<" target ";
    cin>>target;
    string ans = twoSum(n, a, target);
    
    cout<<"This is the answer for variant 1: "<<ans<<endl;
    return 0;
}