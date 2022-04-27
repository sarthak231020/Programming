// #include<iostream> 

// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[],int p,int r)
// {
//     int x,i,j;
//     x = arr[r];
//     i = p-1;
//     for(j=p;j<r;j++)
//     {
//         if(arr[j] <= x)
//         {
//             i = i+1;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[r]);
//     return i+1;
// }

// void quick_sort(int arr[],int p,int r)
// {
//     int q;
//     if(p<r)
//     {
//         q = partition(arr,p,r); 
//         for(int i=p;i<=r;i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         quick_sort(arr,p,q-1);
//         quick_sort(arr,q+1,r);
//     }
// }


// int main()
// {
//     int x;
//     cin>>x;
//     int arr[x];
//     for(int i=1;i<=x;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=1;i<=x;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     quick_sort(arr,1,x);

//     for(int i=1;i<=x;i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
// }


// int partition(int arr[],int p,int r)
// {
//     int x,i,j; 
//     x = arr[r];
//     i = p-1;
//     for(j=p;j<r;j++)
//     {
//         if(arr[j] <= x)
//         {
//             i = i+1;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i+1],&arr[r]);
//     return i+1;
// }

// void quick_sort(int arr[],int p,int r)
// {
//     int q;
//     if(p<r)
//     {
//         q = partition(arr,p,r);
//         quick_sort(arr,p,q-1);
//         quick_sort(arr,q+1,r);
//     }
// }

