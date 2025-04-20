/**** 
Stock Buy and sell;
****/
 
 
#include<bits/stdc++.h>
using  namespace std;


int max_pro(vector<int> &arr, int n){
    int maxi_Pro = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxi_Pro=max(arr[j]-arr[i], maxi_Pro);
            }
        }
    }
    return maxi_Pro;
}

 
int main(){
    vector<int>arr={7,1,5,3,6,4};
    int n= arr.size();
    int maxPro = max_pro(arr,n);
    
    
    cout<<"Max profit is : "<<maxPro<<endl;
}