#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int T;
    cin>>T;
    while(T--)
    {
        int N,P,K;
        cin>>N>>P>>K;
        if(N<=K)
        {
            // cout<<"RUNNING N<=K"<<endl;
            cout<<(P%K)+1<<endl;
            continue;
        }
        if(P == K)
        {
            // cout<<"RUNNING P==K"<<endl;
            cout<<2<<endl;
            continue;
        }
        if(P == 0)
        {
            // cout<<"RUNNING P==0"<<endl;
            cout<<1<<endl;
            continue;
        }
        // if(P < K)
        // {
        //     cout<<"RUNNING"<<endl;
        //     cout<<ceil(N/K)<<endl;
        //     cout<<(P%K)<<endl;
        //     int days = ceil(N/K)+()
        //     cout<<((ceil(N/K))*(P%K)+(1))<<endl;
        //     continue;
        // }
        int div = ceil(floor(N)/floor(K));
        // cout<<"Value of div ="<<div<<endl;
        int mod = N%K;
        int mod1 = P%K;
        int day = 0;
        for(int i=(P%K);i<N;i+=K)
        {
            if(i == P) 
                break;
            day++;
        }
        day++;
        
        if(mod1 != 0) 
        {
            if(mod1 > mod)
            {   
                // cout<<"RUNNING IF"<<endl;
                // for(int i=0;i<mod;i++)
                // {
                //     day += div;
                // }
                day += (div * mod);
                if(mod != 0)
                    div--;
                day += (div * (mod1-mod));
                // for(int i=mod;i<mod1;i++)
                // {
                //     day += div;
                // }
            }
            else
            {
                // cout<<"RUNNING"<<endl;
                // cout<<"P % K = "<<mod1<<"div = "<<div<<endl; 
                // for(int i=0;i<mod1;i++) 
                // {
                //     day += div;
                // }
                day += (div*mod1);
            }
        }
        cout<<day<<endl;
    }
}
