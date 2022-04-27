// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int N;
//     cin>>N;
//     vector<int> V(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>V[i];
//     }

//     sort(V.begin(),V.end());

//     int sum = 0;    
//     for(int i=1;i<N;i++) 
//     {
//         V[i] = V[i]+V[i-1];
//         sum += V[i];
//     }

//     cout<<sum<<endl;

// }

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int N;
    cin>>N;
    priority_queue <int,vector<int>,greater<int>> pq;
    int ele;
    for(int i=0;i<N;i++)
    {
        cin>>ele;
        pq.push(ele);
    }
    int min1,min2;
    int total = 0;
    while(pq.size() != 1)
    {
        min1 = pq.top();
        pq.pop();
        min2 = pq.top();
        pq.pop();
        total += min1+min2;
        pq.push(min1+min2);

    }
    cout<<"TOTAL :"<<total<<endl;
    cout<<pq.top()<<endl;
}