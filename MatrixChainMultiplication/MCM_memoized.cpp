// Just for format we will follow in matrix chain multiplication questions
#include<bits/stdc++.h>
using namespace std;

int T[102][102];

int solve(vector<int> v,int i,int j) 
{
    if(i>=j) 
    {
        return 0;
    }
    if(T[i][j] != -1) 
    {
        return T[i][j]; 
    }

    int ans = INT_MAX;
    for(int k=i;k<=j-1;k++)  //K's range depends on specific questions.
    {
        int temp_ans = (solve(v,i,k)+solve(v,k+1,j)+(v[i-1]*v[k]*v[j])); // + (can be any operations here)
        ans = min(temp_ans,ans); //min (can be any function here)
    }
    return T[i][j] = ans;
}

int main() 
{
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    memset(T,-1,sizeof(T));
    
    cout<<solve(v,1,N-1)<<endl;

    
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=N;j++) 
        {
            cout<<T[i][j]<<"\t";
        }
        cout<<endl;
    }

}