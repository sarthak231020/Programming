#include<bits/stdc++.h>
using namespace std;

//MAP
//map takes O(logn) time 
//map only stores unique keys 
//Map stores data in lexicographically sorted order
//It is independent from values a value can be taken by any no of keys

// int main()
// {
//     // say I wanna to store name and age 
//     map<string,int> mpp;
//     mpp["gov"] = 21;
//     mpp["sar"] = 21;
//     mpp["rah"] = 21;
//     mpp["fcc"] = 20;
//     mpp["gov"] = 22; //Overwrites the previous value........
//     mpp["gor"] = 28;
//     mpp.emplace("sa",30);

//     for(auto it:mpp)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     }

//     // mpp.find(some value which does not exist) returns pointer pointing to mpp.end() 

//     // for(auto it=mpp.begin();it != mpp.end(); it++)
//     // {
//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }

//     mpp.clear();

//     if(mpp.empty())
//     {
//         cout<<"Yes it is empty"<<endl;
//     }

// }

//Unordered_map Same case here 
//No order is maintained 
// O(1) is the tc 
//worst cases rarely occurs takes O(n) time
//So simply if case allows you to not have a specific order then
//then try using unordered_map if TLE then try using maps;
//Unordered map not allows us to work for pairs kind of data types while Maps allows us.


//MULTIMAP
//Here we are allowed to have duplicates..........
//here also O(logn)

int main() 
{
    multimap< string , int >  mpp;
    mpp.emplace("raj",10);
    mpp.emplace("raj",20);
    mpp.emplace("raj",10);
    mpp.emplace("gov",10);
    mpp.emplace("gov",10);
    mpp.emplace("gov",20);
    mpp.emplace("gov",10);

    for(auto it:mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

}

