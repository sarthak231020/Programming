#include<iostream>
using namespace std;

void towerOfHanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        // cout<<"TOH with 0"<<endl;
        return;
    }
    // cout<<"TOH with "<<n<<endl;
    towerOfHanoi(n-1,src,helper,dest);
    // cout<<"TOH with "<<n<<endl;
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    // cout<<"TOH with "<<n<<endl;
    towerOfHanoi(n-1,helper,dest,src);
    // cout<<"TOH with "<<n<<endl;
}

int main() 
{
    // int n;
    // cin>>n;
    towerOfHanoi(3,'A','C','B');
}
