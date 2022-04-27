// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int N,n2,n1=0,n5;
//     cin>>N;
//     if(N<=5)
//     {
//         n5=0;
//         N--;
//         n1++;
//         while(N%2 != 0) 
//         {
//             N--;
//             n1++;
//         }
//         n2 = N/2;
//         cout<<n5+n2+n1<<" "<<n5<<" "<<n2<<" "<<n1;
//     }
//     else
//     {
//         n2 = N%5;
//         N = N-(2*n2);
//         N--;
//         n1++;
//         while(N%5 != 0)
//         {
//             N--;
//             n1++;
//         }
//         n5 = N/5;
//         if(n1 == 3 || n1 == 4)
//         {
//             n1 -= 2;
//             n2 += 1;
//         }
//         else if(n1==5)
//         {
//             n1 = n1-4;
//             n2 += 2;
//         }

//         if(n2 == 4 && n1 == 2)
//         {
//             n2 -= 2;
//             n1 -= 1;
//             n5 += 1;
//         }
//         else if(n2==4)
//         {
//             n2 -= 3;
//             n1 += 1;
//             n5 += 1;
//         }
//         cout<<n5+n2+n1<<" "<<n5<<" "<<n2<<" "<<n1<<endl;
//     }
// }


//Effiecient solution
#include<iostream>
using namespace std;

int main()
{
    int N,five,two,one;
    cin>>N;
    five = (N-4)/5;

    if((N-(5*five))%2 == 0)
        one = 2;
    else
        one = 1;
    
    two = (N-(5*five)-one)/2;

    cout<<five+two+one<<" "<<five<<" "<<two<<" "<<one<<endl;
}

