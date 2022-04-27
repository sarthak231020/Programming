#include<iostream> 
using namespace std;

int main() 
{
    int T;
    cin>>T; 
    while(T--)
    {
        int n;
        cin>>n;
        int rev=0; 
        while(n)
        {
            rev = rev*10+(n%10);
            n /= 10;
        }
        cout<<rev<<endl;
    }
}