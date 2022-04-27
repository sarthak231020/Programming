// https://www.codechef.com/CCSTART2/problems/SQALPAT
#include<iostream>
using namespace std; 

int main() 
{
    int N;
    cin>>N;
    int count = 1; 
    for(int i=1;i<=N;i++)
    {
        int j=count;
        if(i%2 != 0)
        {
            for(j=count;j<=count+4;j++)
            {
                cout<<j<<" ";
            }
        }
        else
        {
            for(j=count+4;j>=count;j--)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
        count+=(4+1);
    }
}