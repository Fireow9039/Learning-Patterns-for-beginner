/******************************************************************************
Longest Consecutive array in an array
Brute Force Method
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int>&a, int num)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            return true;
        }
    }
    return false;
}


int LongestSuccessiveElements(vector<int> a)
{
    int n= a.size(); // length(size) of the array
    int longest = 1;
    //pick a element and search for its consecutive number
    
    for(int i=0;i<n;i++)
    {
        int x= a[i];
        int cnt =1;
        
        //searh for consecutive numbers using linear search
        
        while(linearsearch(a,x+1)==true)
        {
            x+=1;
            cnt+=1;
        }
        
        longest = max(longest, cnt);
        
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