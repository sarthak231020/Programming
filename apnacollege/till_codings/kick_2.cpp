#include<iostream>
using namespace std; 

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
        long long int count = 1;
        for(long long int i=1;i<=N/2+1;i++)
        {
            long long int sum = i;
            for(long long int j=i+1;j<N;j++)
            {
                sum += j;
                if(sum == N)
                {
                    // cout<<"Value of I:"<<i<<endl;
                    count++;
                }
                else if(sum>N)
                {
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}