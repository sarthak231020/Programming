#include<bits/stdc++.h>
using namespace std;


// //SETS
// int main() 
// {
//     int n;
//     cin>>n;
//     set<int> s;
//     //Sets are implemented using red black trees
//     //It stores all element in increasing order
//     //It takes worst case O(logn) for every operation n is set size 
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         s.insert(x);
//     }
//     // Indexing is not allowed in sets....... 

//     for(auto it:s)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     //erase

//     s.erase(s.begin()); //s.erase(iterator) remove the first element

//     for(auto it:s)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     // s.erase(s.begin(),s.begin()+2); //It is giving an error of invalid types.
    
//     //This will work..........
//     auto itr = s.begin();
//     advance(itr,2);
//     s.erase(s.begin(),itr);

//     for(auto it:s)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     // s.erase(begin,end) here begin inclusive and end is excluded it is [)

//     //s.erase(key)  // Just mention value which is to be deleted

//     set<int> st = {1,5,7,8}; 

//     auto it = st.find(7); //it will be iterator to 7. //logn time
//     cout<<*it<<endl;
//     it = st.find(9); // it will point to s.end();
//     if(it == st.end())
//     {
//         cout<<"Iterator is pointing to the last element item is not present"<<endl;
//     }
//     st.erase(5);

//     for(auto it:st)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     //emplace takes less time than insert operation.

//     cout<<s.size()<<endl;
//     st.clear(); //deletes Every Element from the set.
//     //we can define set on any datatype

//     // set<node> st; where node is structure.

//     //st.erase(st.begin(),st.end()); will delete all the elements of the set
// }


//UNORDERED SET 
//In almost all of the cases time complexity is O(1)
//For some worst kind of cases O(n) linear complexity
//So do try unordered set first in contest if no ascending order is required 
//If it gives TLE try to use set only.
//All operations are same as sets....... 

//Multisets
//we are allowed to have duplicates
//here time complexity is O(logn) each operations
//we can check no of occurance by ms.count(key);
//all other operations are same as set

// int main()
// {
//     multiset<int> ms;
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(2);
//     ms.insert(2);
//     ms.insert(2);
//     ms.insert(3); // ms.emplace(key) does the same work......
//     ms.insert(3);
//     ms.insert(4);
//     ms.insert(4);

//     ms.erase(1); //all instances will be erased

//     auto it = ms.find(3); //returns pointer pointing to first occurance of the 3
//     cout<<*it<<endl;  // 3 

//     // ms.clear(); // deletes entire multiset;

//     // ms.erase(ms.begin(),ms.end()); //deletes entire multiset;
//     it = ms.find(2);
    
//     advance(it,2); 

//     // ms.erase(ms.find(2),ms.find(2)+2); //This will give error of unsupported types...........

//     ms.erase(ms.find(2),it);

//     for(auto it:ms)
//     {
//         cout<<it<<" ";
//     }   
//     cout<<endl; //2 3 3 4 4 

//     cout<<ms.count(4)<<endl; //2
// }

//Given N elements print the elements that occurs maximum 
//number of times 
//input 
//5
//1 4 4 4 2  1<=Ai<=10^6
//output 3
int main()
{

    int n;
    cin>>n;
    map<int,int> mpp;
    int maxi = 0;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x] > mpp[maxi])
        {
            maxi = x; 
        }
    } 

    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<maxi<<endl;
}

//Given N elements print all elements in sorted order 
//input
//n = 6
//6 6 3 2 3 5 
//output
//2 3 3 5 6 6 

int main()
{
    int n;
    cin>>n;
    multiset<int> ms;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }

    for(auto it:ms)
    {
        cout<<it<<" ";
    }
    
    cout<<endl;
}