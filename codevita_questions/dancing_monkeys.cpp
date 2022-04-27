#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<int> V(N);
        for(int i=0;i<N;i++)
        {
            cin>>V[i];
            V[i] = V[i]-1;
        }
        vector<int> temp(V.begin(),V.end());
        vector<int> temp1(V.begin(),V.end());
        int count = 0;
        while(true)
        {
            for(int i=0;i<N;i++)
            {
                if(i == V[i])
                    continue;
                else
                    temp1[V[i]] = temp[i];
            }
            temp = temp1;
            count++;
            if(temp1 == V)
            {
                break;
            }
        }
        cout<<count<<endl;
    }
}

// int main()
// {
//     int T,N;
//     cin>>T;
//     while(T--)
//     {
//         cin>>N;
//         vector<int> V(N);
//         for(int i=0;i<N;i++)
//         {
//             cin>>V[i];
//             V[i]--;
//         }

//         vector<int> temp(V.begin(),V.end());

//         for(int i=0;i<N;i++)
//         {
//             while(i != temp[i])
//             {
//                 swap(temp[i],i);
//             }
//         }
//     }
// }