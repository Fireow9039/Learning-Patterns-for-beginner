/******************************************************************************
Set Matrix Zero

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

void Markrow(vector<vector<int>> &matrix, int n, int m,  int i){
    for (int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}


void MarkCol(vector<vector<int>> &matrix, int n, int m,  int j){
    for (int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
    
}

vector<vector<int>> ZeroMatrix(vector<vector<int>> &matrix, int n, int m){
    //Set -1 for rows and column that contains 0 and don't mark and dont mark any zeros as -1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                Markrow(matrix, n, m, i);
                MarkCol(matrix, n, m, j);
            }
        }
    }
    
    //Finally, mark all -1 to 0;
    
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
    
    return matrix;
} 

int main(){
    vector<vector<int>>matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    
    vector<vector<int>>ans = ZeroMatrix(matrix, n,m);
    
    cout<<"the Final Matrix is : "<<endl;
    for(auto it: ans){
        for (auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}