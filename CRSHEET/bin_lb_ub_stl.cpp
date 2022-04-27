#include<bits/stdc++.h>
using namespace std;
//Array must be sorted in order to apply these Operations 
//All of these takes O(logn) time to get executed..........
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,key;
        cin>>n>>key;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {  
            cin>>v[i];
        }

        bool res = binary_search(v.begin(),v.end(),key);
        if(res == false)
            cout<<key<<" is not present"<<endl;
        else
            cout<<key<<" is present "<<endl;
        

        // TO get First Ocuurance 
        //Lower Bound returns first Occurance  of the element if it exists
        //Otherwise returns the pointer to next greater element 
        int ind = lower_bound(v.begin(),v.end(),key)-v.begin();

        if(ind != n && v[ind] == key)
            cout<<"First Occurance of "<<key<<" is present at "<<ind<<endl;
        else
            cout<<key<<" is not present"<<endl;

        //To Get Last Ocuurance
        //Upper Bound Returns pointer pointing to greater element than key 
        ind = upper_bound(v.begin(),v.end(),key)-v.begin();
        ind--;
        if(ind >= 0 && v[ind] == key)
            cout<<"Last Occurance of "<<key<<" is present at index "<<ind<<endl;
        else
            cout<<"Key is not present"<<endl;
        
        //Find Largest Number smaller than X in a sorted array....

        ind = lower_bound(v.begin(),v.end(),key)-v.begin();
        ind--;

        if(ind >= 0)
            cout<<"Largest number smaller than "<<key<<" is "<<v[ind]<<endl;
        else
            cout<<-1;
        
        //Find smallest number greater than X in a sorted array.
        ind = upper_bound(v.begin(),v.end(),key)-v.begin();
        if(ind < n)
            cout<<"Smallest number greater than "<<key<<" is "<<v[ind]<<endl;
        else    
            cout<<-1<<endl;
    }
}