#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    vector<int> v1;

    while(n)
    {
        v1.push_back(n%2);
        n = n/2;
    }
    reverse(v1.begin(),v1.end());

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    cout<<endl; 
    int dec_value=0;
    for(int i=v1.size()-1;i>=0;i--)
    {
        dec_value += pow(2,i)*v1[v1.size()-1-i];
    }

    cout<<dec_value<<endl;

}
