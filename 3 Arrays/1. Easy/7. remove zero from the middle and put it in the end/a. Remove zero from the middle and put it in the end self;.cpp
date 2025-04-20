#include <bits/stdc++.h> //self code
using namespace std;


void remove_zero(int arr[], int n){
    
    int temp[10];
    int j;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    
    for(j=0;j<n;j++){
        cout<<temp[j];
    }
}

int main(){
    int n=10;;
    
    int arr[n] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    
    remove_zero(arr, n);
}