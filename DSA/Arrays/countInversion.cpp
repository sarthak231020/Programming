// #include<bits/stdc++.h>
// using namespace std; 

// int merge(vector<int> v,vector<int> temp,int left,int mid,int high) 
// {
//     int inv_count = 0;
//     int i,j,k;
//     i = left;
//     j = mid;
//     k = left;

//     while(i<=mid-1 && j<=high)
//     {
//         if(v[i] <= v[j]) 
//         {
//             temp[k++] = v[i++];
//         }
//         else 
//         {
//             temp[k++] = v[j++];
//             inv_count += (mid-i);
//         }
//     }
//     while(i<=mid-1) 
//     {
//         temp[k++] = v[i++];
//     }
//     while(j<=high) 
//     {
//         temp[k++]=v[j++];
//     }

//     for(int l=left;l<=high;l++) 
//     {
//         v[l] = temp[l];
//     }

//     return inv_count;
// }


// int mergeSort(vector<int> v,vector<int> temp,int low,int high) 
// {
//     int invCount = 0,mid;
//     if(low < high) 
//     {
//         mid = (low+high)/2;
//         invCount += mergeSort(v,temp,low,mid);
//         invCount += mergeSort(v,temp,mid+1,high);
//         invCount += merge(v,temp,low,mid+1,high);
//     }
//     return invCount;
// }

// int main() 
// {
//     int N; 
//     cin>>N;

//     vector<int> v(N);

//     for(int i=0;i<N;i++) 
//     {
//         cin>>v[i];
//     }
//     vector<int> temp(N);

//     cout<<"Hey"<<endl;
//     cout<<mergeSort(v,temp,0,N-1);
    

// }

// C++ program to Count
// Inversions in an array
// using Merge Sort 
#include <bits/stdc++.h>
using namespace std;

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid,
		int right);

/* This function sorts the
input array and returns the
number of inversions in the array */
int mergeSort(int arr[], int array_size)
{
	int temp[array_size];
	return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function
that sorts the input array and
returns the number of inversions in the array. */
int _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid, inv_count = 0;
	if (right > left) {
		/* Divide the array into two parts and
		call _mergeSortAndCountInv()
		for each of the parts */
		mid = (right + left) / 2;

		/* Inversion count will be sum of
		inversions in left-part, right-part
		and number of inversions in merging */
		inv_count += _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid + 1, right);

		/*Merge the two parts*/
		inv_count += merge(arr, temp, left, mid + 1, right);
	}
	return inv_count;
}

/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, int mid,
		int right)
{
	int i, j, k;
	int inv_count = 0;

	i = left; /* i is index for left subarray*/
	j = mid; /* j is index for right subarray*/
	k = left; /* k is index for resultant merged subarray*/
	while ((i <= mid - 1) && (j <= right)) {
		if (arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];

			/* this is tricky -- see above
			explanation/diagram for merge()*/
			inv_count = inv_count + (mid - i);
		}
	}

	/* Copy the remaining elements of left subarray
(if there are any) to temp*/
	while (i <= mid - 1)
		temp[k++] = arr[i++];

	/* Copy the remaining elements of right subarray
	(if there are any) to temp*/
	while (j <= right)
		temp[k++] = arr[j++];

	/*Copy back the merged elements to original array*/
	for (i = left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;
}

// Driver code
int main()
{
	int arr[] = { 5, 3, 2, 4, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = mergeSort(arr, n);
	cout << " Number of inversions are " << ans;
	return 0;
}

// This is code is contributed by rathbhupendra
