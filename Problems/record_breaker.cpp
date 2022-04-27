#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    for(int k=0;k<T;k++)
    {
        cin>>N;
        long count = 0,j=0;
        vector<long> arr(N);
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        if(arr[0] > arr[1])
            count++;
        bool flag = false;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<i;j++)
            {   
                flag = false;
                if(arr[i] > arr[j])
                {
                    flag = true;
                }
                else
                {
                    break;
                }
            }
        if((i<arr.size()-1) && (flag == true))  
        {   
            if(arr[i] > arr[i+1])
                count += 1;
        }
        if((i == arr.size()-1) && (flag == true))
            count += 1;
        }
    if(k < T-1)
        cout<<"Case #"<<k+1<<": "<<count<<endl;
    else
        cout<<"Case #"<<k+1<<": "<<count;
    }
}