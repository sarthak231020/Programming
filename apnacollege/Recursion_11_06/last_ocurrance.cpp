#include<iostream> 
#include<vector>
int count = 0;
using namespace std;

int lastocc(vector<int> arr,int n,int i,int key)
{
    if(i == n)
    {
        cout<<"Last Occurance Base Case arrived at:"<<i<<endl;
        return -1;
    }
    cout<<"Last Occurance Get called by:"<<i<<endl;
    int restarray = lastocc(arr,n,i+1,key);
    cout<<"Rest Array value is "<<restarray<<" with "<<i<<endl;
    if(restarray != -1)
    {
        cout<<"RESTARRAY!=-1 gets Executed for "<<i<<" Restarray Value is "<<restarray<<endl;
        return restarray;
    }
    if(arr[i] == key)
    {
        cout<<"KEY found at "<<i<<endl;
        return i;
    }
    return -1;
}

int main() 
{
    int n,key;
    cin>>n>>key;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<lastocc(v,n,0,key)<<endl;

    cout<<"No of times last occurrance get called:"<<count<<endl;
}
