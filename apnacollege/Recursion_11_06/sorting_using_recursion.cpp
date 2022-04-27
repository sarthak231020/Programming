#include<iostream> 
#include<vector>
using namespace std;

void insert(vector<int> &v,int temp)
{
    if(v.size() == 0 || v[v.size()-1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int var = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(var);
}

void sorting(vector<int> &v)
{
    if(v.size() == 1)
    {
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    sorting(v);
    insert(v,temp);
}

int main() 
{
    int n;
    cin>>n; 
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sorting(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}