// Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.

// It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise if the middle term is greater than the target, the search is performed in the left sub-array.
// If the middle term is less than target, the search is performed in the right sub-array.

 
// The prototype for binary search is :

// binary_search(startaddress, endaddress, valuetofind)

// startaddress: the address of the first element of the array.
// endaddress: the address of the last element of the array.
// valuetofind: the target value which we have to search for.

#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {1,5,8,9,10,4,2,3,7,6,0};

    int asize = sizeof(a)/sizeof(a[0]);

    cout<<"The array is:"<<endl;
    show(a,asize);

    cout<<"whenever we have to apply binary search we must have to sort the array"<<endl;
    cout<<"So applying sorting...........\n"<<endl;
    sort(a,a+asize);
    show(a,asize);
    cout<<"\nNow applying binary search..."<<endl;
    //searching for 2
    if(binary_search(a,a+asize,2))
        cout<<"Element is present in the array"<<endl;
    else
        cout<<"Element is not present in the array"<<endl;
    
    //Now searching for 100
    if(binary_search(a,a+asize,100))
        cout<<"Element is present in the array"<<endl;
    else
        cout<<"Element is not present in the array"<<endl;
    
    return 0;
}