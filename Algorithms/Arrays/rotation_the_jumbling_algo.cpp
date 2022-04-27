#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    {
        return gcd(b,a%b);
    }
}

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void left_rotate(int arr[],int d,int n)
{
    d = d%n; // In case of d>=n;

    int g_c_d = gcd(d,n); 

    for(int i=0;i<g_c_d;i++)
    {
        int temp = arr[i];
        int j = i;

        while(1)
        {
            int k = j+d;
            
            if(k>=n)
                k = k-n;
            if(k == i) 
                break;
            
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
        cout<<"Array after "<<i<<" Iterations:";
        printarray(arr,n);
    }
}

int main()
{
    int n,d; 
    cout<<"Enter the size and no. of rotations:";
    cin>>n>>d;

    cout<<"Enter the elements of the array:";

    int arr[n];

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }   

    left_rotate(arr,d,n);
    cout<<"Finally The array after "<<d<<" Rotations:";
    printarray(arr,n);

    return 0;
}