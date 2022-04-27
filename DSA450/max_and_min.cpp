#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    int n;
    cin>>n; 
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int max = v[0],min = v[0];

    for(int i=0;i<n;i++)
    {
        if(max < v[i])
            max = v[i];
        if(min > v[i]) 
            min = v[i];
    }

    cout<<max<<endl;
    cout<<min<<endl;

}


#include<iostream>
#include<vector>
using namespace std;

struct Pair 
{
    int min,max;
};

struct Pair minmax(int arr[],int n)
{
    struct Pair minmax;
    int i;
    // If array has even number of elements
    // then initialize the first two elements
    // as minimum and maximum

    if(n%2 == 0) 
    {
        if(arr[0] > arr[1]) 
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else 
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }
    else
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        i = 1;
    }

    while(i < n-1)
    {
        if(arr[i] > arr[i+1]) 
        {
            if(arr[i] > minmax.max) 
                minmax.max = arr[i];
            if(arr[i+1] < minmax.min) 
                minmax.min = arr[i+1];
        }
        else
        {
            if(arr[i+1] > minmax.max)
                minmax.max = arr[i+1];
            if(arr[i] < minmax.min)
                minmax.min = arr[i];
        }

        i += 2;
    }
    return minmax;
}
int main() 
{
    int arr[] = {1000,11,445,1,330,3000};
    int arr_size = 6;

    Pair minmax = getMinMax(arr,arr_size);

    cout<<"nMinimum element is:"<<minmax.min<<endl;

    cout<<"nMaximum element is:"<<minmax.max<<endl;   
}
