#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool comp(int P1,int P2)
{
    return P1>P2;
}
int main()
{
    int N,M,D;
    while(scanf("%d %d %d",&N,&M,&D))
    {
        if(!(N||M||D))
            break;
        vector<int> V1(N),V2(N);
        for(int i=0;i<N;i++)
        {
            cin>>V1[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>V2[i];
        }

        sort(V1.begin(),V1.end());
        sort(V2.begin(),V2.end(),comp); 
        
        int s=0;

        for(int i=0;i<N;i++)
        {
            if(V1[i]+V2[i] > M)
            {
                s += (V1[i]+V2[i]-M)*D; 
            }
        }

        cout<<s<<"\n";
    }
}