//Brute force

#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}


int main(){
    vector<int> arr1 = {1,4,3,7,6,8,9};
    vector<int> arr2 = {4,8,9,10,2,3,1};
    
    cout<<"the Largest element in an array is : "<<largest(arr1)<<endl;
    cout<<"the Largest element in an array is : "<<largest(arr2)<<endl;
}