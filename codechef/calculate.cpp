#include<bits/stdc++.h>
using namespace std;


int main() 
{
    float num=1.0,sum=0.0;
    vector<float> v;
    while(num)
    {
        cin>>num;
        if(num == 0.0)
        {
            break;
        }
        v.push_back(num);
        sum += num;
    }   


    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // cout<<sum<<endl;
    printf("%.2f",sum);
}
