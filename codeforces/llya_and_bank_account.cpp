#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    if(n<0)
    {
        if((abs(n)/10)%10 <= (abs(n)%10))
        {
            n = n/10;
        }
        else
        {
            int temp = abs(n)%10;
            n = n/100;
            n = n*10-temp;
        }
    }

    cout<<n<<endl;
}