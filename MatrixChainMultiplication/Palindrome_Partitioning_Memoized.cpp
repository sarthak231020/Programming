#include<bits/stdc++.h>
using namespace std;

//here I,J are varying and DP can be applied since function being called 2 times and there is a chance of overlapping subproblems.
//So we have to make matrix to keep values at different I & J values.
// consider contraints are  1<=S.length()<=1000.

int T[1002][1002];

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
        int left,right;
        if(T[i][k] != -1) 
        {
            left = T[i][k];
        }
        else 
        {
            left = solve(S,i,k);
        }

        if(T[k+1][j] != -1) 
        {
            right = T[k+1][j];
        }
        else
        {
            right = solve(S,k+1,j);
        }


        int temp_ans = 1+left+right;

        ans = min(temp_ans,ans); 
    }
    return T[i][j] = ans;
}

int main() 
{
    string S;
    cin>>S;
    int N = S.length();
    memset(T,-1,sizeof(T));

    cout<<solve(S,0,N-1)<<endl;

    return 0;
}