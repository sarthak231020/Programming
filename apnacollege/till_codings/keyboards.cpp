#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int missingKeyboards(vector<int> Arr)
{
    sort(Arr.begin(),Arr.end());
    int c=0;
    for(int i=0;i<Arr.size()-1;i++)
    {
        if(Arr[i+1] != Arr[i]+1)
            c++;
    }
    return c;
}
int main() 
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout <<missingKeyboards(arr);

}