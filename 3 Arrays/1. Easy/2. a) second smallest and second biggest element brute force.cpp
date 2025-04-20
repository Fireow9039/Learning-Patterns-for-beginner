// 2nd smallest and 2nd biggest element in an array
#include<bits/stdc++.h>

using namespace std;

void elements(int arr[], int n){
    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl; //edge case when only one element is present in array 
        
    }
    
    sort(arr, arr+n);
    int second_small= arr[1];
    int second_largest= arr[n-2];
    
    cout<<"The second smallest element in the array: "<<arr[1]<<endl;
    cout<<"The second largest element in the array : "<<arr[n-2]<<endl;
    
}

int main()
{
    int arr[]={1,2,4,6,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    elements(arr, n);
    return 0;
}

//time complexity : O(nlogn) 