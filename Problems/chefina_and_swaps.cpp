#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void swap(int *n,int *m)
{
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}


int main() 
{
    int T,N;

    cin>>T;
    while(T--)
    {
        cin>>N;
        vector<int> A(N);
        vector<int> B(N);
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        for(int j=0;j<N;j++)
        {
            cin>>B[j];
        }

        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

        bool equal = false;

        for(int i=0;i<N;i++)
        {
            if(A[i] == B[i])
            {
                equal = true;
            }
            else
            {
                equal = false;
                break;
            }
        }

        if(equal == true)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            int cost = 0;
            for(int i=0;i<N;i++)
            {
                if(A[i] != B[i])
                {
                    for(int j=i;j<N-1;j++)
                    {
                        if((B[i] == B[j+1]) && (A[i] == A[j+1]))
                        {
                            swap(&A[i],&B[j+1]);
                            cost += min(A[i],B[j+1]);
                        }
                    }
                }
            }
            
            for(int i=0;i<N;i++)
            {
                if(A[i] == B[i])
                {
                    equal = true;
                }
                else
                {
                    equal = false;
                    break;
                }
            }

            if(equal == true)
            {
                cout<<cost<<endl;
                continue;   
            }

            cout<<-1<<endl;
        }
    }
}
//         if(A.size() == 1 && B.size() == 1 && A[0] != B[0])
//         {
//             cout<<-1<<endl;
//             continue;
//         }

//         bool flag = false;
//         for(int i=0;i<A.size();i++)
//         {    
//                 flag = false;
//             for(int j=0;j<A.size();j++)
//             {
//                 if(((i != j) && (A[i] == A[j])) || (A[i] == B[j]) ||((i != j) && (B[i] == B[j])))
//                 {
//                     flag = true;
//                 }
//             }
//         }

//         bool equal = false;

//         if(flag == false)
//         {
//             cout<<-1<<endl;
//             continue;
//         }
//         else
//         {
//             for(int i=0;i<A.size();i++)
//             {
//                 if(A[i] == B[i])
//                 {
//                     equal = true;
//                 }
//             }

//             int count = 0;
//             if(equal == true)
//             {
//                 cout<<0<<endl;
//                 continue;
//             }
//             else
//             {   
//                 for(int i=0;i<A.size();i++)
//                 {
//                     if(A[i] != B[i])
//                     {
//                         swap(&A[i],&B[i]);
//                         count++;
//                     }
                    
//                     sort(A.begin(),A.end());
//                     sort(B.begin(),B.end());

//                     for(int j=0;j<A.size();j++)
//                     {
//                         if(A[j] == B[j])
//                             equal = true;
//                     }

//                     if(equal == true)
//                         break;
//                 }

//                 if(equal == true)
//                 {
//                     cout<<count<<endl;
//                     continue;
//                 }

//             }
            
//         }

//     }
// }

