// #include<iostream>
// #include<set>
// #include<math.h>
// using namespace std;
// set<int> S;

// void divisor(int n)
// {
//     S.insert(1);
//     int i=2;
//     for(i=2;i<=sqrt(n);i++)
//     {
//         if(n%i == 0)
//         {
//             S.insert(i);
//             S.insert(n/i);
//         }
//         S.insert(n);
//     }
// }

// int main()
// {
//     int N,K;
//     cin>>N>>K;
//     divisor(N);
//     set<int>::iterator itr;
//     int i=0;
//     bool print = false;
//     for(itr = S.begin();itr!=S.end();itr++)
//     {
//         if(i==K)
//         {
//             print = true;
//             cout<<*itr<<endl;
//             break;
//         }
//         i++;
//     }
//     if(print == false)
//     {
//         cout<<1<<endl;
//     }
// }

// with O(1) space ...........
#include<iostream>
using namespace std;

int main()
{
    int N,K,c;
    cin>>N>>K;
    for(int i=N;i>=1;i--)
    {
        if(N%i == 0) 
            c++;
        if(c == K) 
        {
            cout<<i<<"\n";
            break;
        }
    }
    if(c!=K)
    {
        cout<<1<<"\n";
    }
}