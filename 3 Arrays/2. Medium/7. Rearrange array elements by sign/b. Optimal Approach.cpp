/**** 
Rearrange elements by signed
brute force method;
****/
 
 
#include<bits/stdc++.h>
using  namespace std;


vector<int> ReArrange(vector<int> &arr, int n){
    // Define an array for storing the ans seperately;
    
    vector<int> ans(n,0);
    
    //positive elements start from zero and negative from 1 
    
    int PosIndex=0, NegIndex=1;
    for(int i=0;i<n;i++){
        
        //fill negative element in odd indices and inc by 2;
        
        if(arr[i]<0){
            ans[NegIndex]=arr[i];
            NegIndex+=2;
        }
        else{
            ans[PosIndex]=arr[i];
            PosIndex+=2;
        }
    }
    
    return ans;
}


 
int main(){
    vector<int>arr={1,2,-4,-5};
    int n= arr.size();
    vector<int> rearrange = ReArrange(arr,n);
    
    
    cout<<"The rearranged Array is :";
    for(int i=0;i<n;i++){
        cout<<rearrange[i]<<" ";
    }
    cout<<endl;
    return 0;
}