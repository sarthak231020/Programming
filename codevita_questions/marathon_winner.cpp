#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    int N,T;
    cin>>N>>T;
    vector<vector<int>> V(N,vector<int> (T+1));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<=T;j++)
        {
            cin>>V[i][j];
        }
    }

    for(int i=0;i<N;i++)
    {
        V[i][0] = V[i][0]*V[i][T];
    }

    for(int i=0;i<N;i++)
    {
        for(int j=1;j<T;j++)
        {
            V[i][j] = V[i][j-1]+(V[i][j]*V[i][T]);
        }
    }

    vector<int> count(N,0);

    int max = INT_MIN,ind;
    for(int j=1;j<T;j+=2)
    {
        for(int i=0;i<N;i++)
        {
            if(V[i][j] > max)
            {
                max = V[i][j];
                ind = i;
            }
        } 
        count[ind] += 1;
    }
    vector<int>::iterator itr = max_element(count.begin(),count.end());
    int i = itr-count.begin();
    i++;
    cout<<i<<endl;
}