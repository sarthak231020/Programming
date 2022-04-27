#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void traverse(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// Q-1
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int start=0,end=n-1;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     traverse(n,arr);
// }

// Q-2
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) 
        {
            max = arr[i];
        }
    }

    cout<<"max:"<<max;
    cout<<endl;
    int min = 1000000;
    for(int i=0;i<n;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout<<"Min:"<<min;

}
