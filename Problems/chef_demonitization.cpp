#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);//https://www.geeksforgeeks.org/fast-io-for-competitive-programming/#:~:text=Adding%20ios_base%3A%3Async_with_stdio%20(false,%3A%3Acin%20accepts%20an%20input.
    long long int T,s,n,div;
    cin>>T;

    while(T--) 
    {
        cin>>s>>n;

        div = s/n;
        s = s%n;

        if(s == 0)
        {    
            cout<<div<<endl;
            continue;
        }
        if(s == 1)
        {
            cout<<div+1<<endl; 
            continue;
        }
        
        if(s%2 == 0)
            div += 1;
        else
            div += 2;
        cout<<div<<endl;
   }
   return(0);
}