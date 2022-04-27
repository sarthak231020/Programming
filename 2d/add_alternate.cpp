#include<iostream>
#include<vector> 
using namespace std;

int main() 
{
    vector<vector<int> >  V(3,vector<int>(3));
    int s1=0,s2=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>V[i][j];
            if(i==j || i+j == 2)
                s1 += V[i][j];
            else
                s2 += V[i][j];
        }
    }

    cout<<s1<<"\n"<<s2<<"\n";

}