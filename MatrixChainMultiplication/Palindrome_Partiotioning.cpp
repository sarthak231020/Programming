#include<bits/stdc++.h>
using namespace std; 

bool is_palindrome(string S,int i,int j) 
{
    if(i >= j) 
    {
        return true;
    }
    while(i<j) 
    {
        if(S[i] != S[j]) 
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int solve(string S,int i,int j) 
{
    if(i >= j) 
    {
        return 0; //No partitions required in this case
    }
    if(is_palindrome(S,i,j)==true) 
    {
        return 0; //No partitions required in this case
    }

    int ans = INT_MAX;

    for(int k=i;k<=j-1;k++) 
    {
        int temp_ans = solve(S,i,k)+solve(S,k+1,j)+1;

        ans = min(temp_ans,ans); 
    }
    return ans;
}

int main() 
{
    string S;
    cin>>S;
    int N = S.length();

    cout<<solve(S,0,N-1)<<endl;

    return 0;
}