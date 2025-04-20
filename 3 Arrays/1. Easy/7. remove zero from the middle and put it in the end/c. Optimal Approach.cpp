#include <bits/stdc++.h> //Optimal Approach
using namespace std;


vector<int> move_zero(vector<int> arr, int n){
    
    int j=-1;
    //place the pointer j
    for(int i=0;i<n;i++)
    {
        if (arr[i]==0){
            j=i;
            break;
        }
        
    }
    //if non zero element are there;
    if(j==-1){
        return arr;
    }
    
    //move the pointer i and j;
    // and swap the array;
    
    for(int i=j+1; i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    
    return arr;
}
    


int main(){
    
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans =move_zero(arr, n);
    
    for(auto it : ans){
        cout << it <<" ";
    }
    cout<<endl;
}