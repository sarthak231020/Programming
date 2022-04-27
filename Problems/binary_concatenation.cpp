// #include<iostream>
// using namespace std;

// long long binary_concat(long long x,long long y)
// {
//     string binx = bitset
// }

// int main()
// {
//     int T;

// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_concat(int x,int y)
{
    string binx = bitset<64> (x).to_string();
    auto loc1 = binx.find('1');
    if(loc1 != string::npos)
    {
        binx=binx.substr(loc1);
    }

    string biny = bitset<64> (y).to_string();
    auto loc2 = biny.find('1');
    if(loc2 != string::npos)
    {
        biny=biny.substr(loc2);
    }

    string binxplusy = binx+biny;
    string binyplusx = biny+binx;

    int xplusy = stoi(binxplusy,nullptr,2);
    int yplusx = stoi(binyplusx,nullptr,2);
    
    return xplusy-yplusx;
}

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<int> V(N);
        int i=0;
        while(N--)
        {
            cin>>V[i];
            i++;
        }
        int maximum = 0;

        for(int i=0;i<V.size();i++)
        {
            for(int j=0;j<V.size();j++)
            {
                if(i != j)
                {
                    if(maximum <= binary_concat(V[i],V[j]))
                    {
                        maximum = binary_concat(V[i],V[j]);
                    }
                }
            }
        }
        cout<<maximum<<endl;
    }
}