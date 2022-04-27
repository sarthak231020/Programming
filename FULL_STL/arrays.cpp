// // The introduction of array class from C++11 has offered a better alternative for C-style arrays. The advantages of array class over C-style array are :-

// // Array classes knows its own size, whereas C-style arrays lack this property. So when passing to functions, we don’t need to pass size of Array as a separate parameter.
// // With C-style array there is more risk of array being decayed into a pointer. Array classes don’t decay into pointers
// // Array classes are generally more efficient, light-weight and reliable than C-style arrays.
 
// C++ code to demonstrate working of array, 
// to() and get() 
#include<iostream> 
#include<array> // for array, at() 
#include<tuple> // for get() 
using namespace std; 
int main() 
{ 
	// Initializing the array elements 
	array<int,6> ar = {1, 2, 3, 4, 5, 6}; 

	// Printing array elements using at() 
	cout << "The array elements are (using at()) : "; 
	for ( int i=0; i<6; i++) 
	cout << ar.at(i) << " "; 
	cout << endl; 

	// Printing array elements using get() 
	cout << "The array elements are (using get()) : "; 
	cout << get<0>(ar) << " " << get<1>(ar) << " "; 
	cout << get<2>(ar) << " " << get<3>(ar) << " "; 
	cout << get<4>(ar) << " " << get<5>(ar) << " "; 
	cout << endl; 

	// Printing array elements using operator[] 
	cout << "The array elements are (using operator[]) : "; 
	for ( int i=0; i<6; i++) 
	cout << ar[i] << " "; 
	cout << endl; 
    //front and back
    cout<<"The first element:"<<ar.front()<<endl;
    cout<< "The last element:" <<ar.back()<<endl;

    cout<<"size of the array:"<<ar.size()<<endl;
    cout<<"Maximum size of the array:"<<ar.max_size()<<endl;

    array<int,6> ar1 = {10,20,30,40,50,60};

    array<int,6> ar2 = {100,200,300,400,500,600};

    ar1.swap(ar2);

    for(int i=0;i<6;i++) 
    {
        cout<<ar1[i]<<"  ";
    }
    cout<<endl;

    for(int i=0;i<6;i++) 
    {
        cout<<ar2[i]<<"  ";
    }
    cout<<endl;

    if(ar1.empty())
    {
        cout<<"The array is empty"<<endl;
    }
    else
    {
        cout<<"The array is not empty"<<endl;
    }

    cout<<"fill(value) used to fill entire array with the value"<<endl;
    array<int,10> newarr;

    newarr.fill(100);
    for(int i=0;i<10;i++) 
    {
        cout<<newarr[i]<<"  ";
    }    
    cout<<endl;


} 
