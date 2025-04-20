/************
 Rotate Matrix by 90 degree Brute force
*************/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> RotateMatrix(vector<vector<int>>&matrix, int n){
    vector<vector<int>>rotated(n, vector<int>(n,0));
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            rotated[j][n-i-1]=matrix[i][j];
            
        }
    }
    return rotated;
    
}




int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    
    int n=matrix.size();
    
    
    vector<vector<int>> rotated = RotateMatrix(matrix, n);
    
    cout<<"The Rotated Matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<rotated[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}