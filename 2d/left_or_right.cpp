#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N,Q;
    cin>>N>>Q;
    vector<int> V(N);
    for(int i=0;i<N;i++) 
    {
        cin>>V[i];
    }
    int Y,Z;
    char D;
    for(int i=0;i<Q;i++)
    {
        cin>>Y>>Z>>D;
        bool flag = false;
        for(int j=0;j<V.size();j++)
        {
            if(V[j] == Z)
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout<<-1<<endl;
            continue;
        }
        Z--;
        if(Y == Z)
        {
            cout<<0<<endl;
            continue;
        }
        int steps = 0;
        while(Y != Z)    
        {
            if(D == 'L')
            {  
                Y = (Y-1+N)%N;
                steps += 1;
            }
            else if(D == 'R')
            {
                Y = (Y+1)%N;
                steps += 1;
            }
        }
        cout<<steps<<endl;
    }
}