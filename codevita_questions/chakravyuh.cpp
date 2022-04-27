#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<vector<int>> V(N,vector<int> (N));
    int i,j,w,size,counter = 1;
    size = N-1;
    for(w = 0;w<N/2;w++)
    {
        i = w;
        j = w;

        //right
        for(j=j;j<size+w;j++)
        {
            V[i][j] = counter;
            counter++;
        }

        //Down
        for(i=i;i<size+w;i++)
        {
            V[i][j] = counter;
            counter++;
        }

        //left
        for(j=j;j>w;j--)
        {
            V[i][j] = counter;
            counter++;
        }

        //Up
        for(i=i;i>w;i--)
        {
            V[i][j] = counter;
            counter++; 
        }

        size = size-2;
    }

    if(N%2 != 0)
    {
        V[w][w] = N*N;
    }

    vector<pair<int,int>> co_ord((N*N/11)+1);
    co_ord[0].first = 0;
    co_ord[0].second = 0;

    int c=1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<V[i][j]<<"\t";
            if(V[i][j] % 11 == 0)
            {
                co_ord[c].first = i;
                co_ord[c].second = j;
                c++;
            }
        }
        cout<<"\n";
    }

    for(int i=0;i<co_ord.size();i++) 
    {
        cout<<"("<<co_ord[i].first<<","<<co_ord[i].second<<")"<<endl;
    }

    cout<<co_ord.size()<<endl;
    
}