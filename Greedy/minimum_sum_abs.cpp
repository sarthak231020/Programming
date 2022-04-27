#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int ele; 
    priority_queue<int,vector<int>,greater<int>> A,B;
    
    for(int i=0;i<N;i++)
    {
        cin>>ele;
        A.push(ele);
    }
    for(int i=0;i<N;i++)
    {
        cin>>ele;
        B.push(ele);
    }
    int sum = 0;

    for(int i=0;i<N;i++)
    {
        sum += abs(A.top()-B.top());
        A.pop();
        B.pop(); 
    }

    cout<<sum<<endl;
}