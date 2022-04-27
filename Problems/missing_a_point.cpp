// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;



// bool sortcol( const vector<long>& v1, 
//                const vector<long>& v2 ) { 
//  return v1[0] < v2[0]; 
// } 


// bool sortcol1( const vector<long>& v1, 
//                const vector<long>& v2 ) { 
//  return v1[1] < v2[1]; 
// } 

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cout.tie(NULL);
//     cin.tie(NULL);
//     long T,N; 
//     cin>>T;

//     while(T--)
//     {
//         cin>>N; 
//         vector<vector<long> > v(4*N-1,vector<long>(2));

//         for(long i=0;i<4*N-1;i++)
//         {
//             cin>>v[i][0]>>v[i][1];
//         }

//         sort(v.begin(),v.end(),sortcol);

//         long first_point = 0;
//         for(long i=0;i<4*N-2;i += 2)
//         {   
//             if(i<4*N-1)
//             {
//                 if(v[i][0] != v[i+1][0])
//                 {
//                     first_point = v[i][0];
//                     break;
//                 }
//             }
//         }
//         bool flag = true;
//         long second_point = 0;
//         sort(v.begin(),v.end(),sortcol1);
//         for(long i=0;i<4*N-2;i+=2)
//         {
//             if(i<4*N-1)
//             { 
//                 if(v[i][1] != v[i+1][1])
//                 {
//                     second_point = v[i][1];
//                     break;
//                 }
//             }
//         }

//     cout<<first_point<<" "<<second_point<<endl;
//     }
// }


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



bool sortcol( const vector<long>& v1, 
               const vector<long>& v2 ) { 
 return v1[0] < v2[0]; 
} 


bool sortcol1( const vector<long>& v1, 
               const vector<long>& v2 ) { 
 return v1[1] < v2[1]; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    long T,N; 
    cin>>T;

    while(T--)
    {
        cin>>N; 
        vector<vector<long> > v(4*N-1,vector<long>(2));

        for(long i=0;i<4*N-1;i++)
        {
            cin>>v[i][0]>>v[i][1];
        }

        sort(v.begin(),v.end(),sortcol);

        long first_point = 0;
        for(long i=0;i<4*N-2;i += 2)
        {   
            if(v[i][0] != v[i+1][0])
            {
                first_point = v[i][0];
                break;
            }
        }
        bool flag = true;
        long second_point = 0;
        sort(v.begin(),v.end(),sortcol1);
        for(long i=0;i<4*N-2;i+=2)
        { 
            if(v[i][1] != v[i+1][1])
            {
                second_point = v[i][1];
                break;
            }      
        }

    cout<<first_point<<" "<<second_point<<endl;
    }
}