#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> set_row_col_0(vector<vector<int>> &V,int i,int j,int R,int C)
{
    vector<vector<int>>
    for(int k=1;k<=C;k++)
    {
        V[i][k] = 0;
    }
    for(int k=1;k<=R;k++)
    {
        V[k][j] = 0;
    }
}


int main() 
{
    int R,C;
    cin>>R>>C;
    // vector<vector<int>> V(R);
    vector<vector<int>> V(R+1,vector<int> (C+1));

    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            cin>>V[i][j];
        }
    }


    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            if(V[i][j] == 0)
            {
                set_row_col_0(V,i,j,R,C);
                break;
            }
        }
    }

    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0;i<R;i++)

    // for(int i=0;i<R;i++)
    // {
    //     for(int j)
    // }
}