#include<iostream>
#include<cmath> //For the sqrt
using namespace std;

int main()
{
    int n; 
    cin>>n;
    bool flag=true; 
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i == 0) 
        {
            flag = false;
            break;
        }
    }

    if(flag == false)
        cout<<n<<" is not prime number"<<endl;
    else 
        cout<<n<<" is a prime number"<<endl;
}
