#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    long T,N;
    cin>>T;

    while(T--)
    {
        cin>>N;
        vector<long> vec(N);
        long i=0;
        while(N--)
        {
            cin>>vec[i];
            i++;
        }

        long count = 0;
        for(long i=0;i<vec.size()-1;i++)
        {
            if(vec[i] < vec[i+1])
                count += abs((vec[i]+1)-vec[i+1]);
            else
                count += abs(vec[i]-(vec[i+1]+1));
        }
        cout<<count<<endl;
    }
}