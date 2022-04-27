#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    for(int j=1;j<=T;j++)
    {
        cin>>N;
        vector<char> V(N+2,'#');  //because we will traverse till N+2-1;
        for(int i=0;i<N;i++)
        {
            cin>>V[i];
        }
        int s=0;
        for(int i=0;i<N;i++)
        {
            if(V[i] == '.')
            {
                V[i] = V[i+1] = V[i+2] = '#';
                s++;
            }
        }
        cout<<"Case "<<j<<": "<<s<<endl;
    }
}