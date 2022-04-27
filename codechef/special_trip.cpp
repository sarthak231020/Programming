// #include<bits/stdc++.h>
// using namespace std; 

// int main() 
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int N;
//         cin>>N;
//         if(N == 2)
//         {
//             cout<<1<<endl;
//             continue;
//         }
//         // int d = 3; 
//         // 3->3
//         // 4->6
//         // 5->9
//         // 6->12
//         cout<<((N-3)+1)*3<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
set<int> s;
vector<vector<int>> v(1e5+7);

void factors(int N)
{
    s.clear();
    s.insert(1);
    for(int i=2;i<=sqrt(N);i++)
    {
        if(N%i == 0)
        {
            s.insert(i);
            s.insert(N/i);
        }
    }
}

bool is_prime(int N)
{
    for(int i=2;i<=sqrt(N);i++) 
    {
        if(N%i == 0)
            return false;
    }
    return true;
}

int main() 
{
    int T;
    cin>>T;
    for(int i=2;i<=1e5+2;i++)
    {
        factors(i);
        vector<int> vec(s.begin(),s.end()); 
        v[i] = vec;
    }

    while(T--)
    {
        int N;
        cin>>N;
        int count = 0;
        for(int B=2;B<=N;B++)
        {   
            // cout<<"FOR B = "<<B<<endl;
            // factors(B);
            // for(auto it:s)
            // {
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            int div = N/B;
            // cout<<"div = "<<div<<endl;
            // count += s.size();
            count += (v[B].size()*div);
            // cout<<"count = "<<count<<endl;
            int val = B*div;
            // cout<<"val = "<<val<<endl;
            for(auto it:v[B])
            {
                if((it+val) > N)
                    break;
                count++;
            }
            // cout<<"count = "<<count<<endl;
            // cout<<count<<endl;
            // if(is_prime(B))
            // {
            //     int div = N/B;
            //     count += s.size();
            //     int val = B*div;
            //     for(auto it:s)
            //     {
            //         if((it+val) > N)
            //             break;
            //         count++;
            //     }
            //     // for(int c=0;c*B+1<=N;c++)
            //     // {
            //     //     count++;
            //     // }
            // }
            // else
            // {
            //     for(auto it:s)
            //     {
            //         count++;
            //         for(int i=1;i*B+it<=N;i++)
            //         {
            //             count++;
            //         }
            //     }
            // }
        }
        cout<<count<<endl;
    }
}