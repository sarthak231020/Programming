#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int bit_score(int n)
{
    int a,b,c;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;

    int largest = b>a?b:a;
    largest = largest>c?largest:c;
    int smallest = b<a?b:a;
    smallest = c<smallest?c:smallest;

    largest = largest*11;
    smallest = smallest*7;
    int score = largest+smallest;
    if((int)(trunc(log10(score))+1) == 3)
    {
        score = score%100;
    }
    score = score/10;
    return score;
}

int scores(vector<int> V1,int N)
{
    // vector<int> even,odd;
    vector<int> cover(10,0);


    for(int i=0;i<N;i+=2)
    {
        for(int j=i+2;j<N;j+=2)
        {
            if(V1[i] == V1[j] && cover[V1[i]] < 2)
            {
                cover[V1[i]] += 1;
            }
        }
    }
    
    for(int i=1;i<N;i+=2)
    {
        for(int j=i+2;j<N;j+=2)
        {
            if(V1[i] == V1[j] && cover[V1[i]] < 2)
            {
                cover[V1[i]] += 1;
            }
        }
    }
    // for(int i=0;i<N;i+=2)
    // {
    //     even.emplace_back(V1[i]);
    // }
    // for(int i=1;i<N;i+=2)
    // {
    //     odd.emplace_back(V1[i]);
    // }

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=i+1;j<N;j++)
    //     {
    //         if(even[i] == even[j] && cover[even[i]] < 2)
    //         {
    //             cover[even[i]] = cover[even[i]]+1;
    //         }
    //     }
    // }
    
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=i+1;j<N;j++)
    //     {
    //         if(odd[i] == odd[j] && cover[odd[i]] < 2)
    //         {
    //             cover[odd[i]] = cover[odd[i]]+1;
    //         }
    //     }
    // }

    int sum = 0;
    for(int i=0;i<10;i++)
    {
        sum += cover[i];
    }

    return sum;
}

int main()
{
    int N;
    cin>>N;
    vector<int> V(N);

    for(int i=0;i<N;i++)
    {
        cin>>V[i];
        V[i] = bit_score(V[i]);
        cout<<V[i]<<"\t";
    }
    cout<<endl;
    cout<<scores(V,N)<<endl;
}