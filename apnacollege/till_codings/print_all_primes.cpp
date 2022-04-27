#include<iostream> 
#include<cmath>

using namespace std; 
// int main() 
// {
//     int n1,n2; 
//     cin>>n1>>n2; 

//     for(int i=n1;i<=n2;i++)
//     {   
//         bool flag = true;
//         for(int j=2;j<=sqrt(i);j++)
//         {
//             if(i%j == 0)
//             {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true)
//             cout<<i<<" ";
//     }
    
// }

// Or by using functions 

#include<iostream>
using namespace std; 

bool is_prime(int num) 
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n1,n2; 
    cin>>n1>>n2; 

    for(int i=n1;i<=n2;i++) 
    {
        if(is_prime(i))
        {
            cout<<i<<" ";
        }
    }

}

