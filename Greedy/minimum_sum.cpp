#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    vector<int> V(N);

    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }

    int Min = *min_element(V.begin(),V.end());
    Min = Min*(N-1);
    cout<<Min<<endl;
}