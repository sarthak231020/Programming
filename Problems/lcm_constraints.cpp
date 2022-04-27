// #include<iostream>
// using namespace std;

// int main() 
// {
//     int T;

//     while(T--)
//     {
//         cin>>N>>M;
//         vector<int> v(N);
//         while(M--)
//         {
//             cin>>X>>Y>>R;

//             if((X*Y)/gcd(X,Y) == R)
//             {
//                 flag = true;
//                 v.emplace_back((X))
            
//         }

//         if(flag == true)
//         {
//             cout<<-1<<endl;
//         }


//     }
// }



#include<bits/stdc++.h>
#include<vector>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int lcm(int a,int b)
{   
    int temp1=a,temp2=b;
    while(b)
    {
        a %= b;
        swap(&a,&b);
    }

    return (temp1*temp2)/a; //a is gcd of the a and b,so we have multiplied actual no. to get product then divided it by their gcd for lcm 
}

int main()
{
    // int a,b;

    // cout<<"Enter a and b:";
    // cin>>a>>b;

    // cout<<"The lcm is:"<<lcm(a,b);  // code to check whether lcm is working or not....

    int T,N,M;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;

        int ans=1;

        if(M == 0)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<vector<long> > XYR(M,vector<long>(3));
        vector<vector<long> > pe(200,vector<long>(2));
        vector<long> B(M,1);
        for(unsigned long i=0;i<M;i++)
        {
            cin>>XYR[i][0]>>XYR[i][1]>>XYR[i][2];

            if(XYR[i][2] == 0)
            {
                B[i] = 1;
            }

            if(XYR[i][2] > 0)
            {
                // pe.resize(XYR[i][2],2);
                for(long j=0;j<XYR[i][2];j++)
                {
                    cin>>pe[j][0]>>pe[j][1];
                }

                for(long r=1;r<=XYR[i][2];r++)
                {
                    B[i] = B[i]*pow(pe[r-1][0],pe[r-1][1]);
                }
            }
        }                                                           
        for(long i=0;i<M;i++)
        {
            cout<<"X:"<<XYR[i][0]<<"  Y:"<<XYR[i][1]<<"  R:"<<XYR[i][2]<<"  B:"<<B[i]<<endl;

        }  



        vector<long> A(N,1);
        int count = 0;
        for(long t=0;t<M;t++)
        {
            for(long k=1;k<=B[t];k++)
            {
                for(long l=1;l<=B[t];l++)
                {
                    if(lcm(l,k) == B[t])
                    {
                        if(A[XYR[t][0]] == l && A[XYR[t][0]] == k)
                            count++;
                        else
                            count = 0;
                        
                        // count++; 
                        A[XYR[t][0]]=l;
                        A[XYR[t][1]]=k;

                    }
                }
            }
        }
        
        if(count > N)
            cout<<-1<<endl;
        else if(count == 0)
            cout<<0<<endl;
        else
            cout<<1<<endl; 
    }

}