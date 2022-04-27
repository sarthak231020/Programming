#include<bits/stdc++.h> 
using namespace std;

typedef pair<int,pair<int,int>> job;

bool comp(job ele1,job ele2)
{
    if(ele1.second.first == ele2.second.first)
    {
        if(ele1.second.second <= ele2.second.second)
            return true;
        return false;
    }
    if((ele1.second.first < ele2.second.first))
        return true;
    return false;
}


int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        vector<int> T(N);
        
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        
        // for(int i=0;i<N;i++)
        // {
        //     cout<<A[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<N;i++)
        {
            cin>>T[i];
        }
        
        // for(int i=0;i<N;i++)
        // {
        //     cout<<T[i]<<" ";
        // }
        // cout<<endl;
        vector<job> vec;
        // vector<pair<int,int>> vec;
        for(int i=0;i<N;i++)
        {
            if(A[i] <= T[i])
            {
                // cout<<"PUSHING.........."<<endl;
                vec.push_back(make_pair(i+1,make_pair(A[i],T[i])));
            }
        }

        if(vec.size() == 0)
        {
            cout<<0<<endl;
            continue;
        }
        
        if(vec.size() == 1) 
        {
            cout<<1<<endl;
            cout<<vec[0].first<<" "<<0<<" "<<vec[0].second.first<<endl;
            continue;
        }
        // for(int i=0;i<vec.size();i++) 
        // {
        //     cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
        // }
        sort(vec.begin(),vec.end(),comp);

        // for(int i=0;i<vec.size();i++) 
        // {
        //     cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
        // }

        int filled = 0,M=0;
        int maxDead = INT_MIN;

        for(int i=0;i<vec.size();i++)
        {
            maxDead = max(maxDead,vec[i].second.second);
        }

        vector<job> result;
        vector<bool> slot(maxDead,false);
        for(int i=0;i<vec.size();i++)
        {
            int t2 = vec[i].second.second;
            int t1 = vec[i].second.first;
            if((slot[t2-t1] == false) && (slot[(t2)-1] == false))
            {
                for(int j=t2-t1;j<t2;j++) 
                {
                    slot[j] = true;
                }

                result.push_back(make_pair(vec[i].first,make_pair(t2-t1,t2)));
                // // cout<<"I am Running"<<endl;
                // M++; 
                // filled += vec[i].second.first;

                // // cout<<M<<" "<<filled<<endl;
                // // if(filled > maxDead)
                // //     break;
                // result.push_back(make_pair(vec[i].first,make_pair(filled-vec[i].second.first,filled)));
            }
        }

        // while((M < (2*N)) && (filled <= maxDead))
        // {   
        //     M++;
        //     filled += vec[0].second.first;
        //     if(filled > maxDead) 
        //         break;
        //     result.push_back(make_pair(vec[0].first,make_pair(filled-vec[0].second.first,filled)));
           
        // }

        cout<<result.size()<<endl;
        for(auto it:result)
        {
            cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
        }
        
        // for(int i=0;i<N;i++)
        // {
        //     int A;
        //     cin>>A;
        //     vec.push_back(make_pair(i+1,make_pair(A,0))); 
        // }
        // for(int i=0;i<N;i++)
        // {
        //     int T;
        //     cin>>T;
        //     vec[i].second.second = T;
        // }
        // vector<job> v
        // for(int i=0;i<N;i++)
        // {

        // }
        // for(int i=0;i<N;i++)
        // {
        //     cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
        // }


        
    }
}
