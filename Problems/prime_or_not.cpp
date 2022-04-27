#include<iostream>
using namespace std;

// bool is_prime(long long int n)
// {
//     long long int i=2;
//     if(n==0 || n==1)
//     {
//         return false;
//     }
//     while(i*i<=n)
//     {
//         if(n%i == 0)
//             return false;
//         i++;
//     }
//     return true;
// }



int main()
{
    int T;
    long long int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        (is_prime(n))?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}