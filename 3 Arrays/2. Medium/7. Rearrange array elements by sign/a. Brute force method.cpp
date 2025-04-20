/**** 
Rearrange elements by signed
brute force method;
****/
 
 
#include<bits/stdc++.h>
using  namespace std;


vector<int> ReArrange(vector<int> &arr, int n){
    
    vector<int> pos;
    vector<int> neg;
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
        
        
    }
    
    
    cout<<"Positive numbers are : ";
    for(int i=0;i<n/2;i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
    cout<<"Negative numbers are : ";
    for(int i=0;i<n/2;i++){
        cout<<neg[i]<<" ";
    }
    cout<<endl;
    
    
    
    for(int i=0;i<n/2;i++){
        arr[2*1] = pos[i];
        arr[2*i +1]=neg[i];
    }
    
    return arr;
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