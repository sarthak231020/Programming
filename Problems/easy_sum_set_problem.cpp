#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int N,M;
//     cin>>N;
//     set<int> sn(N);
//     while(N--)
//     {
//         cin>>ele;
//         sn.insert(ele);
//     }
//     cin>>M;
//     set<int> sm(M);
    
//     while(M--)
//     {
//         cin>>ele;
//         sm.insert(ele);
//     }

//     if(M>=N)
//     {
//         set<int> sc(M);
//     }
//     else
//     {
//         set<int> sc(N);
//     }

//     for(int i=0;i<sc.size();i++)
//     {
//         sc.insert(abs(sm[i]-sn[i]));
//         cout<<sc[i]<<" ";
//     }


// }


int main()
{
    int N,M;
    cin>>N;
    vector<int> vn(N);
    int i=0;
    while(N--)
    {
        cin>>vn[i]; 
        i++;
    }
    i=0;
    cin>>M;
    vector<int> vm(M);
    while(M--)
    {
        cin>>vm[i];
        i++;
    }

    set<int> sb(min(vn.size(),vm.size()));
    i = 0;
    for(set<int>::iterator itr=sb.begin();itr!=sb.end();itr++)
    {
        
    }
}