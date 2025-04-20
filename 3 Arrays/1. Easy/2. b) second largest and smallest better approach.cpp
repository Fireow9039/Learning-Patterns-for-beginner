// 2nd smallest and 2nd biggest element in an array optimal approach
#include<bits/stdc++.h>

using namespace std;

void element(int arr[], int n){
    
    if(n==0 || n==1){
        cout<<1<<" "<<-1<<endl;
        
    }
    
    int small=INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large= INT_MIN;
    int i;
    

    for(i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
        
        
        
    }
    
    cout<<"Largest : "<<large<<endl;
    cout<<"smallest : "<<small<<endl;
    
    
    for(i=0;i<n;i++){
        if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
        if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    
    cout<<"Second smallest : "<<second_small<<endl;
    cout<<"Second Largest : "<<second_large<<endl;
}


int main()
{
    int arr[]={1,2,4,7,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    element(arr,n);
    
    
    return 0;
}

//time complexity : 