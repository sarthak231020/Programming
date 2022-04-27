#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int T,N,K;
    cin>>T;

    while(T--)
    {
        cin>>N>>K;
        vector<int> a(N);

        long s=0,sk=0;
        for(size_t i=0;i<N;i++)
        {
            cin>>a[i];
            s += a[i];
            if(a[i]>K)  
                a[i] = K;
            sk += a[i];
        }

        cout<<s-sk<<endl;
    }
}