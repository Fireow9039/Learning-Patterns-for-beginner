// Check if the array is sorted or not
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n){
    
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}


int main(){
    int arr[] = {1,1,2,2,2,3,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k =removeDuplicates(arr,n);
    cout<<"The Array After removing the Duplicate is"<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    
}