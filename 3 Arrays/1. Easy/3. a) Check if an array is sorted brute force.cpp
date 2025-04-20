// Check if the array is sorted or not
#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
                return false;
        }
    }
    return true;
}


int main(){
    int arr[] = {1,2,3,4,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = is_sorted(arr, n);
    
    if(ans) cout<<"true"<<endl;
    else cout<<"False"<<endl;
    return 0;
}