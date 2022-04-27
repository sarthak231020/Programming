#include<bits/stdc++.h>
using namespace std;

void dec_to_bin(int num,vector<int> &v)
{
    if(num == 0)
    {
        return;
    }
    dec_to_bin(num/2,v);
    v.push_back(num%2);

}


string decToBin(int num,string ans)
{
    if(num == 0)
    {
        return ans;
    }
    ans = to_string(num%2)+ans;
    return decToBin(num/2,ans);
}
int main() 
{
    int num;
    cin>>num;
    vector<int> v;
    dec_to_bin(num,v);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<decToBin(num,"")<<endl;   
}
