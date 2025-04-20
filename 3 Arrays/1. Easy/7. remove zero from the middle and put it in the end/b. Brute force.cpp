#include <bits/stdc++.h> //self code
using namespace std;


vector<int> move_zero(vector<int> arr, int n){
    
    //temporary array
    vector<int> temp;
    //copy non zero element to new array
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    
    //number of non zero element;
    int new_size= temp.size();
    
    
    //copy elements from temporary variable an dit put it back in the original array
    // fill first non zero element;
    
    for(int i=0;i<new_size;i++){
        arr[i]=temp[i];
    }
    
    for(int i=new_size;i<n;i++){
        arr[i]=0;
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