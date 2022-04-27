// #include<iostream>
// #include<bits/stdc++.h>

// #include<vector>
// using namespace std;

// int main() 
// {
//     long long N,R1,R2,rev;

//     cin>>N>>R1>>R2>>rev;
//     int n=14,m=33;
//     vector< vector<long long> > v(n,vector<long long>(m));
//     long long j;
//     for(long long i=1;i<=12;i++)
//     {   
//         if((i==1) || (i==3) || (i==5) || (i==7) || (i==8) || (i==10) || (i==12))
//         {
//             for(j<=1;j<=31;j++)
//             {
//                 v[i][j] = pow(6-i,2) + abs(j-15);
//             }
//         }
//         else if(i==2)
//         { 
//            for(j<=1;j<=28;j++)
//             {
//                 v[i][j] = pow(6-i,2) + abs(j-15);
//             }
//         }
//         else
//         {
//             for(j<=1;j<=30;j++)
//             {
//                 v[i][j] = pow((6-i),2) + abs(j-15);   
//             }
//         }
//     }


//     for(size_t i=0;i<=12;i++)
//     {
//         for(size_t j=0;j<=31;j++)
//         {
//             cout<<v[i][j]<<"  ";
//         }
//     }

//     long long p = 0;
//     for(int i=1;i<=12;i++)
//     {   
//         if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
//         {
//             for(j<=1;j<=31;j++)
//             {
//                 p += v[i][j];
//             }
//         }
//         else if(i==2)
//         {
//             for(j<=1;j<=28;j++)
//             {
//                 p += v[i][j];
//             }
//         }
//         else
//         {
//             for(j<=1;j<=30;j++)
//             {
//                 p+= v[i][j];
//             }
//         }
//     }


//     cout<<"Total No. of patients year:"<<p<<endl;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector< vector<int> > vec(13,vector<int> (33));
    int vec[100][100];
    long long p = 0;
    for(int i=0;i<12;i++)
    {
        if((i==0))
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==2)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==4)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==6)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==7)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==9)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==11)
        {
            for(int j=0;j<31;j++)
            {
                vec[i][j] = pow((6-(i+1)),2)+abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==3)
        {
            for(int j=0;j<30;j++)
            {
                vec[i][j] = pow((6-(i+1)),2) + abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==5)
        {
            for(int j=0;j<30;j++)
            {
                vec[i][j] = pow((6-(i+1)),2) + abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==8)
        {
            for(int j=0;j<30;j++)
            {
                vec[i][j] = pow((6-(i+1)),2) + abs(j+1-15);
                p += vec[i][j];
            }
        }
        else if(i==10)
        {
            for(int j=0;j<30;j++)
            {
                vec[i][j] = pow((6-(i+1)),2) + abs(j+1-15);
                p += vec[i][j];
            }
        }
        
        else if(i==2)
        {
            for(int j=0;j<28;j++)
            {
                vec[i][j] = pow((6-(i+1)),2) + abs(j+1-15);
                p += vec[i][j];
            }
        }
    }

    cout<<p/365<<endl;

    
}