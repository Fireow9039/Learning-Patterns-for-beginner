//recursive approach

#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n){
    int max = arr[0];
    
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    return max;
}


int main(){
    
    int arr1[]={3,5,2,4,1};
    int n1=5;
    int max1= largest(arr1, n1);
    cout<<"the largest element in an array is: "<<max1<<endl;
    
    
    int arr2[]={6,9,10,8,7};
    int n2=5;
    int max2= largest(arr2, n2);
    cout<<"the largest element in an array is: "<<max2<<endl;
    
    
    
}