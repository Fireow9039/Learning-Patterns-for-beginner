/******************************************************************************
leader in an array 
*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

vector<int> LeaderInArray(vector<int> &arr, int n){
    vector <int>ans;
    
    for(int i=0;i<n;i++){
        bool leader= true;
        
        
        //checking weather the array [i] is greater than all the others on the right;
        
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                
                
                //if an element found to be greater than the current leader than it is not a leader
                leader =false;
                break;
            }
        }
        
        if(leader){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}


int main(){
    vector<int> arr= {10, 22, 12, 3, 0, 6};
    
    int n= arr.size();
    
    vector<int> ans = LeaderInArray(arr, n);
    
    cout<<"The Leaders in the array are ";
    for(int i=0;i<n;i++){
        
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}