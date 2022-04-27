#include <bits/stdc++.h>
using namespace std;

// Returns count of rotations
// for an array which is first sorted
// in ascending order, then rotated

// Observation: We have to return
// index of the smallest element
int countRotations(int arr[], int n)
{
	int low = 0, high = n - 1;
	while (low <= high) {

		// if first element is mid or
		// last element is mid
		// then simply use modulo so it
		// never goes out of bound.
		int mid = low + (high - low) / 2;
		int prev = (mid - 1 + n) % n;
		int next = (mid + 1) % n;

		if (arr[mid] <= arr[prev]
			&& arr[mid] <= arr[next])
			return mid;
		else if (arr[mid] <= arr[high])
			high = mid - 1;
		else if (arr[mid] >= arr[low])
			low = mid + 1;
	}
	return 0;
}

// Driver code
int main()
{
	int arr[] = { 15, 18, 2, 3, 6, 12 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << countRotations(arr, n);
	return 0;
}
