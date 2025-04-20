//Brute force Rotate left 1 element 
#include<bits/stdc++.h>
using namespace std;

void rotate_fun(int arr[], int n){
    int temp[100];
    
    for(int i=0;i<n;i++){
        
        temp[i-1]=arr[i];
        
        
    }
    
    temp[n-1]=arr[0];
    cout<<"Array after the rotation is ";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
}


int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"array before left rotate: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    rotate_fun(arr, n);
    
    return 0;
    
    
}