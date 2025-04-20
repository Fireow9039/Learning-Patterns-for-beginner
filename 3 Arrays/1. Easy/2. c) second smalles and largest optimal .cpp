// 2nd smallest and 2nd biggest element in an array optimal approach
#include<bits/stdc++.h>

using namespace std;

int secondLargest(int arr[], int n){
    if(n<2){
        return -1;
    }
    
    int large=INT_MIN;
    int second_largest = INT_MIN;
    
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>large){
            second_largest=large;
            large=arr[i];
        }
        
        else if(arr[i]>second_largest && arr[i]!=large){
            second_largest=arr[i];
        }
    }
    return second_largest;
    
}

int secondSmallest(int arr[], int n)
{
    
    if(n<2)
    {
        return -1;
    }
    int small=INT_MAX;
    int second_smallest=INT_MAX;
    
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<small){
            second_smallest=small;
            small=arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!= small){
            second_smallest=arr[i];
        }
        
        
    }
    
    return second_smallest;
}

int main()
{
    int arr[]={1,2,4,7,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    int ss=secondSmallest(arr, n);
    int sl= secondLargest(arr,n);
    
    
    cout<<"the second smallest elemnt in the array is : "<<ss<<endl;
    cout<<"the second Largest elemnt in the array is : "<<sl<<endl;
    
    
    return 0;
}

//time complexity : 