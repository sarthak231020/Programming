// #include<iostream>
// using namespace std;

// void swap(int *a,int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp; 
// }
// int main() 
// {
//     // int x,y;
//     // cin>>x>>y;
//     // swap(x,y);
//     // cout<<x<<" "<<y<<endl;
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int j=0;
//     //this will make all negatives at one side and all positive at other side 
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] <= 0)
//         {
//             swap(&arr[i],&arr[j]);
//             j++; 
//         }
//     }
    
//     // for(int i=j;i<n;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     for(int i=j;i<n;i++)
//     {

//         if(((abs(arr[i]))-1 < n) && (arr[abs(arr[i])-1] >= 0))
//         {
//             if(arr[abs(arr[i])-1] == 0)
//                 arr[abs(arr[i])-1] = -100;
//             else
//                 arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] >= 0)
//         {
//             cout<<i+1;
//             break;
//         }
//     }
// }

// FROM GFG
/* C++ program to find the
smallest positive missing number */
#include<bits/stdc++.h>
using namespace std;

/* Utility to swap to integers */
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/* Utility function that puts all
non-positive (0 and negative) numbers on left
side of arr[] and return count of such numbers */
int segregate(int arr[], int size)
{
	int j = 0, i; //j for non positive numbers
	for (i = 0; i < size; i++)
    {
		if (arr[i] <= 0) 
        {
			swap(&arr[i], &arr[j]);
			// increment count of
			// non-positive integers
			j++;
		}
	}

	return j;
}

/* Find the smallest positive missing number
in an array that contains all positive integers */
int findMissingPositive(int arr[], int size)
{
	int i;

	// Mark arr[i] as visited by
	// making arr[arr[i] - 1] negative.
	// Note that 1 is subtracted
	// because index start
	// from 0 and positive numbers start from 1
	for (i = 0; i < size; i++) {
		if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
	}

    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
	// Return the first index
	// value at which is positive
	for (i = 0; i < size; i++)
		if (arr[i] > 0)
		
			// 1 is added because
			// indexes start from 0
			return i + 1;

	return size + 1;
}

/* Find the smallest positive missing
number in an array that contains
both positive and negative integers */

int findMissing(int arr[], int size)
{
	
	// First separate positive
	// and negative numbers
	int shift = segregate(arr, size);

	// Shift the array and call
	// findMissingPositive for
	// positive part
	return findMissingPositive(arr + shift,
							size - shift);
}

// Driver code
int main()
{
	// int arr[] = { 0, 10, 2, -10, -20 };
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int missing = findMissing(arr, arr_size);
	cout << "The smallest positive missing number is " << missing;
	return 0;
}

// This above is code is contributed by rathbhupendra



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void swap(int *a,int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int segregate(int arr[],int n)
// {
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] <= 0)
//         {
//             swap(&arr[i],&arr[j]);
//             j++; // Increment j for non-positive integer.
//         }
//         // cout<<j<<" ";
//     }
//     return j;
// }


// void find_smallest_pos(int arr[],int size) //the array passed here will contain only pos ints after segregating
// {
//     for(int i=0;i<size;i++)
//     {
//         if(abs(arr[i])-1 < size && arr[abs(arr[i])-1] > 0)
//         {
//             arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i] > 0)
//         {
//             cout<<i+1;
            // return 0;
//         }
//     }
        // cout<<size+1<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int size = sizeof(arr)/sizeof(arr[0]);
//     // cout<<size<<endl;
//     int j = segregate(arr,size);

//     // for(int i=j;i<size;i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;/
//     find_smallest_pos(arr+j,size-j);
// }
