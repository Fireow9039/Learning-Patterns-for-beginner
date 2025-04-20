/************
Spiral Pattern in an array
*************/

#include<bits/stdc++.h>
using namespace std;

vector<int>SpiralPattern(vector<vector<int>>&matrix, int n, int m){
    vector<int> arr;
    
    int top=0, right=m-1, bottom=n-1, left = 0 ;
    
    while(top<=bottom && left <= right){
        
        //moving left to right
        for(int i=left;i<=right;i++){
            arr.push_back(matrix[top][i]);
            
        }
        top++;
        //moving top to bottom
        for(int i=top;i<=bottom;i++){
            arr.push_back(matrix[i][right]);
        }
        right--;
        
        //for moving right to left;
        
        if(top<= bottom){
            for(int i=right;i>=left;i--){
                arr.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        //for moving bottom to top;
        
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                arr.push_back(matrix[i][left]);
            }
            left++;
        }
        
    }
    return arr;
}



int main(){
    vector<vector<int>> matrix = {{1,2,3,4},
                                    {5,6,7,8}, 
                                    {9,10,11,12},
                                    {13,14,15,16}};
    
    int n=matrix.size();
    int m= matrix[0].size();
    
    
    vector<int> Spiral = SpiralPattern(matrix, n, m);
    
    cout<<"The Spiral Matrix is : "<<endl;
    for(int i=0;i<Spiral.size();i++){
        
        cout<<Spiral[i]<<" ";
        
    }
    return 0;
}