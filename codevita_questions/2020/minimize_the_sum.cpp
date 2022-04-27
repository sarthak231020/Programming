// Below Code getting TLE

// #include<iostream>
// #include<algorithm> 
// #include<vector>
// using namespace std;

// int main()
// {
//     int N,K;
//     cin>>N>>K;
//     vector<int> V(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>V[i];
//     }
//     for(int i=0;i<K;i++)
//     {
//         vector<int>::iterator p;
//         p = max_element(V.begin(),V.end());
//         *p /= 2;
//     }
//     int sum = 0;
//     for(int i=0;i<V.size();i++)
//     {
//         sum += V[i];
//     }

//     cout<<sum<<endl;
// }

//An effiecient Solution
//Using priority Queue Data Structure............(It will Work like a Max heap)

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    priority_queue<int> pq;
    int ele;
    for(int i=0;i<N;i++)
    {
        cin>>ele;
        pq.push(ele);
    }
    int temp;
    for(int i=0;i<K;i++) 
    {
        temp = pq.top();
        pq.pop();
        pq.push(temp/2);
    }
    int sum=0;
    for(int i=0;i<N;i++) 
    {
        sum += pq.top();
        pq.pop();
    }
    cout<<sum<<endl;
}

