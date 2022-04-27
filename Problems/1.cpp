#include<iostream>
#define MOD 1000000007
using namespace std;
int sumDigit(int n){
    return (n%9 == 0 && n != 0) ? 9 : n%9;
}
int main()
{
    int N,K;
    cin>>N>>K; 
    int temp = N;
    int i = 0,temp2,sum;
    int sum1 = 0;
    while(i <= K)
    { 
        temp2 = temp;
        sum = sumDigit(temp2);
        if(sum == 1 || sum == 5) 
            i++;
        temp = (temp+1)%1000000007;
    }
    cout<<temp-1<<"\n"; 

}