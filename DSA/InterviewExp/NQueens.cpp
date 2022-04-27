#include<bits/stdc++.h> 
using namespace std;

bool isSafe(int row,int col,vector<string> board,int N) 
{
    int dupRow = row,dupCol = col;
    while(col >= 0) //Check for that row
    {
        if(board[row][col] == 'Q') 
            return false;
        col--;
    }
    col = dupCol;

    //Check for Upper Diagonal 
    while(row >= 0 && col >= 0) 
    {
        if(board[row][col] == 'Q') 
            return false;
        row--;
        col--;
    }

    row = dupRow;
    col = dupCol;
    //Check for lower diagonal 
    while(row < N && col >= 0) 
    {
        if(board[row][col] == 'Q') 
            return false;
        row++;
        col--; 
    }

    return true;
}

void solve(int col,int N,vector<string> &board,vector<vector<string>> &ans)
{
    if(col == N) 
    {
        ans.push_back(board);
        return;
    }

    for(int row=0;row<N;row++) 
    {
        if(isSafe(row,col,board,N))
        {
            board[row][col] = 'Q';
            solve(col+1,N,board,ans);
            board[row][col] = '.';
        }
    }
}

int main() 
{
    int N; 
    cin>>N;
    string s(N,'.'); 
    vector<string> board(N); 

    for(int i=0;i<N;i++) 
    {
        board[i] = s;
    }

    vector<vector<string>> ans; 

    solve(0,N,board,ans);

    for(auto i:ans) 
    {
        for(auto j:i) 
        {
            for(auto k:j) 
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}