#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> v1(5,vector<int> (5,0));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++) 
        {
            v1[i][j] = j+1;
            cout<<v1[i][j]<<"\t";
        }
        cout<<endl;
    }

    //defining while declaring 

    vector<vector<int>> v=
    {
        {1,2},
        {1,2,3},
        {1,2,3,4},
        {1,2,3,4,5},
        {1}
    };

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }


}

