// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,q;
//     cin>>n>>q;

//     vector<vector<int> > vec(q,

// }



//In O(n) time

#include<cmath> 
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long int N,K,p,q,sum,i,j,max=0,x=0;

    cin>>N>>K; //Reading size of the array and query size

    long int *a = new long int[N+1]();//array of size N+1 initialized with all 0 in it.....

    for(i=0;i<K;i++)
    {
        cin>>p>>q>>sum;

        a[p] += sum;

        if((q+1)<=N)
            a[q+1] -= sum;

    cout<<"The array after the "<<i<<" iterations:";

    for(j=0;j<N+1;j++)
    {
        cout<<a[j]<<" "; 
    }

    }

    cout<<endl;


    for(i=1;i<=N;i++) 
    {
        x = x+a[i];
        if(max < x)
            max = x;    
    }

    cout<<max;

    return 0;
}