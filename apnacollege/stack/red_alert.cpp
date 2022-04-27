#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,D,H;
        cin>>N>>D>>H;
        vector<int> v(N);

        for(int i=0;i<N;i++)
        {
            cin>>v[i];
        }   
        long long int sum = 0;
        int flag = 0;
        for(int i=0;i<N;i++)
        {
            if(v[i] > 0)
                sum += v[i];
            else if(v[i] == 0)
            {
                if(sum < D)
                    sum = 0;
                else
                    sum -= D;
            }

            if(sum > H)
            {
                cout<<"YES"<<endl;
                flag = 1; 
                break;
            }
        }
        if(flag != 1)
        {
            cout<<"NO"<<endl;
        }
    }
}