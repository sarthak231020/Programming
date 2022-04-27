#include<iostream>
using namespace std;

int fact(int n)
{
    int  f=1;
    while(n)
    {
        f *= n;
        n--;
    }
    return f; 
}
int n_c_r(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<n_c_r(i,j)<<" ";
        }
        cout<<endl;
    }


}