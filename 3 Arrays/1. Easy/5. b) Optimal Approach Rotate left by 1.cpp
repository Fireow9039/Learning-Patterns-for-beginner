//Optimal Rotate left 1 element 
#include<bits/stdc++.h>
using namespace std;

void rotate_fun(int arr[], int n){
    int temp;
    temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    arr[n-1]=temp;
    cout<<"Array after the rotation is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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