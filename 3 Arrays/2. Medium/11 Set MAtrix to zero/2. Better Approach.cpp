/************
 Set Matrix to Zero Better Approach
*************/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixZero(vector<vector<int>>&matrix, int n, int m){
    int row[n]={0};//row array;
    int col[m]={0};//column array;
    
    //traverse matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                //mark ith index of the row as 1;
                
                row[i]=1;
                
                //mark jth index of the column as 1;
                col[j]=1;
            }
        }
    }
    
    
    //Finally mark all (i,j)as 0;
    // if ith index of row  or jth index of col is marked 1;
    
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    
    return matrix;
}




int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    int n=matrix.size();
    int m=matrix[0].size();
    
    vector<vector<int>> ans = matrixZero(matrix, n, m);
    
    cout<<"The Final Matrix is : "<<endl;
    for(auto it:ans)
    {
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
    return 0;
    
}