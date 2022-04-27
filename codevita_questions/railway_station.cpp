#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> arr(N),dept(N);

    for(int i=0;i<N;i++)
    {
        cin>>arr[i]>>dept[i];
        dept[i] = arr[i]+dept[i];
    }

    sort(arr.begin(),arr.end());
    sort(dept.begin(),dept.end());

    int platforms=1,result=1,i = 1,j = 0;
    while(i<n and j<n)
    {
        if(arr[i] <= dept[i])
        {
            platforms += 1;
            i += 1;
        }
        else
        {
            platforms += 1;
            j += 1;
        }
        result = max(result,platforms);
    }
    cout<<result<<endl; 

}