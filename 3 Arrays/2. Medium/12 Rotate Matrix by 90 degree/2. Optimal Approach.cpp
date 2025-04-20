/************
 Rotate Matrix by 90 degree Optimal Approach by reducing space complexity
*************/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> RotateMatrix(vector<vector<int>>&matrix, int n){
    //transposing the matrix
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            
            swap(matrix[i][j],matrix[j][i]);
            
        }
    }
    //reversing the matrix
    for(int i=0;i<n;i++)
    {
        
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
    
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