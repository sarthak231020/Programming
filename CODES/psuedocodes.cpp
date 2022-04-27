// #include<iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     cout<<arr<<endl;
//     cout<<++arr[0]<<endl;
//     cout<<(arr+1)<<endl;
//     //arr = arr+1;
//     //We can Not use contants and expressions at left hand side of = operator then the l value required error will be there 
//     cout<<arr<<endl;

// }



// #include<iostream>

// using namespace std;

// int main() 
// {
//     int arr[5];
//     cout<<arr+1<<endl<<&arr+1<<endl;
//     //since & has higher precedence so 
// }

// #include<iostream> 
// using namespace std;

// void print(int arr[])
// {
//     int n=sizeof(arr)/sizeof(arr[0]); 
//     int i; 
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }
// int main() 
// {
//     int arr[] = {1,2,3,4,5,6,7,8};
//     print(arr);
//     //Output is 1 2 since sizeof(arr) returns the size of pointer.
//     return 0;
// }


// #include<iostream> 
// #include<cstdio>
// using namespace std;

// int main() 
// {
//     char arr[100];
//     int n;

//     printf("%d",scanf("%s %d",arr,&n));
//     return 0;
// }

// #include<stdio.h>

// using namespace std;

// int main()
// {
//     int arr[][] = {{1,2},{3,4}};
//     //error: declaration of 'arr' as multidimensional array must have bounds for all dimensions except the first
//     int i,j;
//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++) 
//             printf("%d",arr[i][j]);
//     return 0;

// }



// #include<stdio.h>
// int main()
// {
//     int i;
//     int arr[5] = {1};

//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf(1+"CapGemini");
//     return 0;
// }

// #include<stdio.h>
// int main() 
// {
//     printf("%c",5["Capgemini"]);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Test
// {
//     static int x;
//     public:
//         Test()
//         {
//             x++;
//         }
//         static int getX()
//         {
//             return x;
//         }
// };

// int Test::x = 0;

// int main() 
// {
//     cout<<Test::getX()<<" ";
//     Test t[5];
//     cout<<Test::getX();
// }


// #include<iostream> 
// using namespace std;

// int main() 
// {
//     int a = 1, b = 1;
//     a = (a^0)&1+(b^0)&1;
//     cout<<a+b;
// }

#include<iostream>
using namespace std;
int main() 
{
    int a,b,c;
    a = 1;
    b = 2;
    c = 3;
    cout<<(a&b^c)<<endl;
    // if(a&b^c || a&c) 
    // {
    //     cout<<"If executed....";
    //     a = c<<1;
    // }
    // else
    // {    
    //     cout<<"else executed....";
    //     a = b<<1;
    // }
    // cout<<a+b+c<<endl;
}
