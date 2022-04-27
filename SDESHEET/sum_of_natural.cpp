#include<bits/stdc++.h>
using namespace std;

int sum_of_nat(int num) 
{
    if(num == 0)
    {
        return 0;
    }
    return num+sum_of_nat(num-1);
}

int main() 
{
    int num;
    cin>>num;
    cout<<sum_of_nat(num)<<endl;
}