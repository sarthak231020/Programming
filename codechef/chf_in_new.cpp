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
            cout<<"RUNNING N<=K"<<endl;
            cout<<(P%K)+1<<endl;
            continue;
        }
        if(P == K)
        {
            cout<<"RUNNING P==K"<<endl;
            cout<<2<<endl;
            continue;
        }
        if(P == 0)
        {
            cout<<"RUNNING P==0"<<endl;
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
        cout<<day<<endl;
        if(mod1 != 0) 
        {
            if(mod1 > mod)
            {   
                // cout<<"RUNNING IF"<<endl;
                for(int i=0;i<mod;i++)
                {
                    day += div;
                }
                if(mod != 0)
                    div--;
                for(int i=mod;i<mod1;i++)
                {
                    day += div;
                }
            }
            else
            {
                // cout<<"RUNNING"<<endl;
                // cout<<"P % K = "<<mod1<<"div = "<<div<<endl; 
                for(int i=0;i<mod1;i++) 
                {
                    day += div;
                }
            }
        }
        cout<<day<<endl;
        
        // // vector<int> visit(N,0);
        // int day = (N/K)*(P%K);
        // for(int i=P%K;i<N;i+=K)
        // {
        //     if(i==P)
        //         break;
        //     day++;
        // }
        // cout<<day+1<<endl;
        // bool flag = true;
        // for(int i=0;i<K;i++){
        //     for(int j=i;j<N;j+=K)
        //     {
        //         if(j == P) 
        //         {
        //             flag = false;
        //             break;
        //         }
        //         day++;
        //     }
        //     if(flag == false) 
        //     {
        //         break;
        //     }
        // }
        // cout<<day+1<<endl;
        // for(int i=0;i<N;i++)
        // {
        //     // if(visit[i] != 0)
        //     // {
        //         if(i==P) 
        //         {
        //             visit[i] = 1;
        //             day++;
        //             break;
        //         }
        //         else
        //         {
        //             bool flag = false;
        //             for(int j=i;j<N;j+=K)
        //             {  
        //                 if(j == P)  
        //                 {   
        //                     visit[j] = 1;
        //                     flag = true;
        //                     day++;
        //                     break;
        //                 }
        //                 visit[j] = 1; 
        //                 day++;
        //             }
        //             if(flag == true)
        //                 break;
        //         }
        //     // }            
        // }
        // cout<<day<<endl;
    }
}
