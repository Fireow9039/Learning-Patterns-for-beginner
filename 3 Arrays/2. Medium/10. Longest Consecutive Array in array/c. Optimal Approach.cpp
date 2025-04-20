/******************************************************************************
Longest Consecutive array in an array
optimal approach

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int LongestSuccessiveElements(vector<int> &a){
    int n=a.size();
    
    if (n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    // pull al the elements of the elements in an unordered set;
    
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    
    // Find the longest sequence
    
    for(auto it:st){
        //if it is the starting number;
        if(st.find(it-1)==st.end()){
            // Find the consecutive number;
            int cnt = 1;
            int x = it;
            
            while(st.find(x + 1) != st.end())
            {
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
    
}

int main()
{
    vector<int> a = {100, 200, 1,2,3,4};
    int ans = LongestSuccessiveElements(a);
    
    cout<<"The longest consecutive sequence is "<<ans<<"\n";
    return 0;
}