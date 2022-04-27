// This solution is time:-O(n) and auxillary:-O(n)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     unordered_set<int> s;

//     for(int i=0;i<n;i++)
//     {
//         if(s.find(x-arr[i]) != s.end())
//             cout<<arr[i]<<" "<<x-arr[i]<<endl;
//         s.insert(arr[i]);
//     }

    

// }

// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
// #include <bits/stdc++.h>

// using namespace std;

// void printPairs(int arr[], int arr_size, int sum)
// {
// 	unordered_set<int> s;
// 	for (int i = 0; i < arr_size; i++)
// 	{
// 		int temp = sum - arr[i];

// 		if (s.find(temp) != s.end())
// 			cout << "Pair with given sum "
// 				<< sum << " is (" << arr[i] << ","
// 					<< temp << ")" << endl;

// 		s.insert(arr[i]);
// 	}

//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// /* Driver Code */
// int main()
// {
//     int n,x; 
//     cin>>n>>x;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

// 	int arr_size = sizeof(arr) / sizeof(arr[0]);

// 	// Function calling
// 	printPairs(arr, arr_size, x);

// 	return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int *rem = (int *)calloc(x*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < x)
        {
            r = arr[i]%x;
            rem[r] += 1;
        }
    }
    for(int i=0;i<x/2;i++)
    {
        if(rem[i] > 0 and rem[x-i]>0)
        {
            cout<<"YES"<<endl; 
            break;
        }
    }

    if(x%2 == 0)
    {
        if(rem[x/2] > 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(rem[x/2] > 1 and rem[x-x/2]>1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

