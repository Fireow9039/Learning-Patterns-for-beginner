/******************************************************************************
Find the Majority Element that occurs more than N/2 times
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int majorityelement(vector<int> arr){
    int n= arr.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]=arr[j]){
                count++;
                
            }
        }
        if(count>n/2){
            return arr[i];
            
        }
        
    }
    return -1;
}



int main(){
    vector<int> arr= {2,2,1,1,1,2,2};
    
    int ans = majorityelement(arr);
    
    cout<<"The Majority Element is "<<ans<<endl;
    

}