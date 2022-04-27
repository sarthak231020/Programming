#include<iostream>
#include<math.h> 
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p; 
    
    

    
    // if(p <= n/2)
    // {
    //     cout<<p/2<<endl;
    // }
    // else 
    // {
    //     if(p%2 == 0)
    //         cout<<(n-p)/2<<endl;
    //     else
    //         cout<<(n-p)+1/2<<endl;
    // }

    //Effiecient Solution in one line.........
    cout<<min(p/2,n/2-p/2)<<endl;
}
