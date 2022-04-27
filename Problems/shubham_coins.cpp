// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     int N,M;
//     cin>>N>>M;
//     vector<int> coins;
//     for(int i=0;i<N;i++) 
//     {
//         coins.emplace_back(i+1);
//     }
//     int sum = 0,c=0;
//     for(int i=N-1;i>=0;i--)
//     {
//         if(sum+coins[i] <= M)
//         {
//             sum = sum+coins[i];
//             c++;
//         }
//     }
//     if(sum !=  M)
//     {
//         cout<<-1<<endl;
//     }
//     else
//     {
//         cout<<c<<endl;
//     }
//         /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     return 0;
// }

#include<iostream>
using namespace std;
int main() 
{
    int a=2,b=2,largest;
    largest = (a>b)?a:b;
    cout<<largest<<endl;
}