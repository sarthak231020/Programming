// #include<iostream>
// using namespace std;

// int main() 
// {
//     int TC,a,b;
//     scanf("%d",&TC); //No. of test cases 
//     while(TC--) //Shortcut of repeat until test case become 0.
//     {
//         scanf("%d %d",&a,&b);
//         printf("%d\n",a+b);
//     }
// }

// // INPUT LIKE 
// // 1 2 
// // 5 7 
// // 6 3 
// // 0 0 

// int main()
// {
//     int a,b;
//     while(scanf("%d %d",&a,&b),(a||b)) 
//     {
//         printf("%d\n",a+b);
//     }
// }

// // 1 2
// // 6 7 
// // 6 3 

// int main() 
// {
//     int a,b;
//     while(scanf("%d %d",&a,&b) == 2) //Or by while(scanf("%d %d",&a,&b) != EOF))
//     {
//         printf("%d\n",a+b);
//     }
// }


#include<cstdio>
using namespace std;

int main()
{
    int N;
    char x[110];

    scanf("%d\n",&N);
    while(N--)
    {
        scanf("0.%[0-9] ...\n",&x);
        printf("the digits are 0.%s\n",x);
    }
    return 0;
}