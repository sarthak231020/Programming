#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

int main()
{
    int T,N,K; cin>>T;
    while(T--)
    {
        cin>>N>>K;
        vector<int> pq(N);
        int ele;
        for(int i=0;i<N;i++)
        {
            cin>>pq[i];
        }
        // for(int i=0;i<N;i++)
        // {
        //     cout<<pq[i]<<"\t";
        // }
        // cout<<"\n";
        if(*max_element(pq.begin(),pq.end()) > K)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long sum;
            int count = 1;
            sum = 0;
            int j=0;
            for(int j=0;j<N;j++)
            {
                if((sum + pq[j]) > K)
                {
                    sum = 0;
                    count++;
                }
                sum += pq[j];
            }
            cout<<count<<endl;
        }
    }   
}


// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int> V;
//     for(int i=0;i<5;i++)
//     {
//         cin>>V[i];
//     }

//     for(int )
// }