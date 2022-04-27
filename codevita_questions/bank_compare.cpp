#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int P,T,N1,N2,period;
    float rate,s1=0.0;
    cin>>P>>T>>N1;
    float temp=N1;
    while(N1--)
    {
        cin>>period>>rate;
        s1 += rate;
    }
    s1 = s1/temp;
    cin>>N2;
    float s2=0.0;
    temp = N2;
    while(N2--)
    {
        cin>>period>>rate;
        s2 += rate;
    }
    s2 = s2/temp;

    // cout<<s1<<"    "<<s2<<endl;
    if(s1 < s2) 
        cout<<"Bank A"<<endl;
    else
        cout<<"Bank B"<<endl; 
}