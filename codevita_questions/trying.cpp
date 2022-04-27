// // // #include<iostream>

// // // using namespace std;

// // // int main()
// // // {
// // //     int t,u,v;
// // //     cin>>t>>u>>v;

// // //     v = stoi(to_string(t)+to_string(u)+to_string(v));

// // //     cout<<v+100;

// // //     return 0;
// // // }



// // //2d vectors

// // #include<bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     // cout<<pow(2,10)<<endl;

// //     // cout<<abs(1-15)<<endl;

// //     vector< vector<int> > vec(3,vector<int>(3));
// //     int i,j;

// //     for(i=0;i<3;i++)
// //     {
// //         for(j=0;j<3;j++)
// //         {
// //             vec[i][j] = 99999;
// //         }
// //     }

// //     for(i=0;i<3;i++)
// //     {
// //         for(j=0;j<3;j++)
// //         {
// //             cout<<vec[i][j]<<"  ";
// //         }
// //     }

    

// // }



// // #include<bits/stdc++.h>

// // using namespace std;

// // int main()
// // {
// //     cout<<pow(6-1,2)+abs(1-15)<<endl;
// // }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     int n,q,ele;
//     cin>>n>>q;
//     vector< vector<int> > vec(n);
//     int column;
//     for(int i=0;i<n;i++)
//     {   
//         cin>>column;
//         vec.resize((n,column),;
//         for(int j=0;j<column;j++)
//         {
//             cin>>ele;
//             vec[i][j]  = ele;
//         }
//     }

//     int j,k;
//     for(int i=0;i<q;i++)
//     {
//         cin>>j>>k;

//         cout<<vec[j][k]<<endl;
//     }
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     return 0;
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {
//     vector<long> vec(10,1);

//     for(size_t i=0;i<10;i++)
//     {
//         cout<<vec[i]<<"  ";
//     }

//     return 0;
// }



// *********************** //


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A(10,1),B(10,1);

    if(A == B) 
    {
        cout<<"True"<<endl;
    }

    else
    {
        cout<<"False"<<endl;
    }

    return 0;
}