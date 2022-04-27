#include<iostream>
using namespace std;

int main()
{
    int T,A,B,C;
    cin>>T;

    while(T--)
    {
        int s=0,i;
        cin>>A>>B;
        
        C = A+B;

        while(C!=0)
        {
            i = C%10;

            if(i==0 || i==6 || i== 9)
                s += 6;
            else if(i==1)
                s+=2;
            else if(i==2 || i==3 || i==5)
                s+=5;
            else  if(i==4)
                s+=4;
            else if(i==7)
                s+=3;
            else if(i==8)
                s+=7;
            
            C=C/10;
        }

    cout<<s<<endl;
    }
}

// int main()
// {
//     int a,i;
//     cin>>a;

//     while(a!=0)
//     {
//         i = a%10;
//         a = a/10;
//         cout<<i<<endl;
//     }
//     return 0;

// }