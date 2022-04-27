//For the same size array..........
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> V = {1,6,10,15},V1={2,4,7,8},V2;
    int i,j;
    i=0;
    j=0;
    while(i<V.size() || j<V1.size())
    {
        if(V[i] < V1[j])
        {
            V2.emplace_back(V[i]);
            i++;
        }
        else
        {
            V2.emplace_back(V1[j]);
            j++;
        }
    }

    for(int i=0;i<V2.size();i++)
    {
        cout<<V2[i]<<endl;
    }
}