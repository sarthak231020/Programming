#include<bits/stdc++.h>
using namespace std;

//BITSET
//Bitset uses 1 bit
//bitset stores 0's and 1's

int main()
{
    bitset<5> bt;
    cin>>bt; //10111
 
    //all returns true when all the bits are 1 
    //true 
    //false

    cout<<bt.all()<<endl; //returns a true or a false 


    //any returns true when any of the bits is 1.
    //returns false when all of the bits are 0.
    cout<<bt.any()<<endl;
;
    //count
    cout<<bt.count()<<endl; //print the number of set bits 

    //flip 0 to 1 & 1 to 0

    bt.flip();//flips all the bits; 01000
    cout<<bt<<endl;

    bt.flip(3); //00000
    cout<<bt<<endl;

    //none returns true if all bits are 0
    cout<<bt.none()<<endl; //false

    // set and reset takes indexing from right side  
    // set make that index as 1 if not specified bt.set(2);
    bt.set(); //11111
    cout<<bt<<endl;

    bt.reset(1); 
    cout<<bt<<endl; //11101 

    bt.set(1);
    cout<<bt<<endl; //11111 

    bt.set(4 , 0); // 01111
    cout<<bt<<endl;

    //make that index as 0 if specified bt.set(2 , 0);
    //reset bt.reset(2) clears 2 index making it 0.
    //size returns the size 

    cout<< bt.size() <<endl; // 5 
    //test return that particular index is 1 or not
    //01111
    cout<< bt.test(4) <<endl; // 4th index from right is 0 here 
}
