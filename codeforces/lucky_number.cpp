#include<iostream>
using namespace std;
bool lucky_num[1001];

bool is_lucky(int n)
{
    while(n != 0)
    {
        if(n%10 != 4 && n%10 != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() 
{
    int n;
    cin>>n;
    
    for(int i=1;i<=1000;i++)
    {
        lucky_num[i] = is_lucky(i);
    }
    for(int i=0;i<=1000;i++)
    {
        if(lucky_num[i])
        {
            int count=1;
            for(int j=i;j<=1000;j=i*count)
            {
                lucky_num[j] = true;
                count++;
            }
        }
    }
    (lucky_num[n]==1)?cout<<"YES":cout<<"NO";
    
}