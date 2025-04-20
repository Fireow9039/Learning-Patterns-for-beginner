/******************************************************************************
Selection sort
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
        
    }
    cout<<"After the Sorting by selection sort : "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
}




int main()
{
    int arr[]={13,46,24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Unordered array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    selection_sort(arr,n);
    
    return 0;
}