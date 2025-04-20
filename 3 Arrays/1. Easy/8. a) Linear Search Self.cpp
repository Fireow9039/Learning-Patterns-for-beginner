#include <bits/stdc++.h> //Linear Search by self
using namespace std;

void linear_search(int arr[], int n, int k){
    
    int it;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k){
            it=i;
        }
    }
    
    cout<<k<<" is present in the "<<it<<" index of the array "<<endl;
}


int main(){
    
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    
    int k;
    cin>>k;
    
    linear_search(arr,n,k);
    
    cout<<endl;
}