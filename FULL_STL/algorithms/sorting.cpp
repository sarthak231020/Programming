// Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort().
// This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort.
// The prototype for sort is :

// sort(startaddress, endaddress)

// startaddress: the address of the first element of the array
// endaddress: the address of the next contiguous location of the last element of the array.
// So actually sort() sorts in the range of [startaddress,endaddress]


// sort also can take third parameter that allows you to apply your own logic as applicable see below some examples
#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[])
{
    for(int i=0;i<10;i++) 
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

//For compare pairs...
struct interval
{
    int start,end;
}; 

bool compare_interval(interval i1,interval i2)
{
    return(i1.start < i2.start);
}

int main()
{
    // int a[10] = {2,5,1,3,0,4,8,6,9,7};
    // cout<<"The array before applying introsort:"<<endl;
    // show(a);

    // int n = sizeof(a)/sizeof(a[0]);

    // sort(a,a+n);

    // cout<<"\n\nThe array after applying the sorting:"<<endl;
    // show(a);

    // // sort() takes a third parameter that is used to specify the order in which elements are to be sorted. We can pass “greater()” function to sort in descending order. This function does a comparison in a way that puts greater element before.
    // //Sorting in descending order..........
    // sort(a,a+n,greater<int>());
    // cout<<"Array after applying sort:"<<endl;
    // show(a);
    
    interval arr[] = {{6,8}, {1,9}, {2,4}, {4,7}};

    int size = sizeof(arr)/sizeof(arr[0]);
    //6 and 1 compaired so [1,9] placed before [6,8].....

    sort(arr,arr+size,compare_interval);

    cout<<"Intervals sorted by their start value:"<<endl;
    for(int i=0;i<size;i++) 
    {
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"] ";
    }
 
    return 0;
}