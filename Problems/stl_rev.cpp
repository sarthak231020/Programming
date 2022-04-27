#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
void explain_pair()
{
    pair<int,int> p ={1,3};
    cout<<p.first<<"\n"<<p.second<<endl;

    pair<int,pair<int,int>> p1 = {1,{3,4}};

    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<"\n";

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    cout<<arr[1].first<<" "<<arr[2].second<<"\n"; 
}


void traverse_vec(vector<int> v)
{
    for(int i=0;i<v.size();i++) 
    {
        cout<<v[i]<<"\t";
    }

    cout<<endl;
}
void explain_vector()
{
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(1,2);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i].first<<"\t"<<v1[i].second<<endl;
    }

    vector<int> v2(5,100);
    vector<int> v3(5); //initializes all elements with 0


    vector<int> v4(v3);

    vector<int>::iterator itr=v4.begin();

    itr++; 

    cout<<*(itr)<<endl;

    auto itr1 = v3.rbegin();
    cout<<*itr1<<endl; 

    vector<int> v5;
    for(int i=0;i<5;i++)
    {
        v5.push_back((i+1)*10);
    }

    for(auto itr2=v5.rbegin();itr2!=v5.rend();itr2++)
    {
        cout<<*itr2<<"\t";
    }

    cout<<"Let's Try Some more things......"<<endl;
    
    v5.erase(v5.begin());
    // v5.erase(v5.begin()+2,v.begin()+4);

    traverse_vec(v5);

    v5.pop_back();

    cout<<v5.size()<<endl;

    vector<int> v6(5);

    traverse_vec(v6);

    v5.swap(v6);

    traverse_vec(v5);

    traverse_vec(v6);

    v5.clear();

    cout<<v5.empty()<<endl;

    vector<int> v7(2,100); 
    v5.insert(v5.begin(),v7.begin(),v7.end());

    traverse_vec(v5);

    vector<int> v8; 
    v8.push_back(100);
    v8.push_back(200);

    v8.insert(v8.begin(),300);

    v8.pop_back();

    traverse_vec(v8);

}

void explain_list()
{
    //list always have greater complexities but allow us to insert at front also.......
    //all other functions are same as the vectors.........
    list<int> ls; 
    ls.push_back(100);
    ls.push_back(200);
    ls.push_front(50); 

    for(list<int>::iterator itr=ls.begin();itr!=ls.end();itr++)
    {
        cout<<*itr<<"\n";
    }
    cout<<endl; 
}

void explain_deque()
{
    deque<int> dq; 
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.push_front(-1);

    dq.pop_back();
    dq.pop_front(); 

    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    //Other functions are same as vector in the deque.........
}

void explain_stack()
{
    stack<int> st; 
    st.push(1);
    st.push(2); 
    st.push(3); 
    st.push(4); 
    st.emplace(5);
    cout<<st.top()<<endl;
    st.pop();

    cout<<st.size()<<endl;

    st.empty()?cout<<"The stack is Empty"<<endl:cout<<"The Stack is not Empty"<<endl;

}
 
void explain_queue() 
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3); 
    q.back() += 5; 

    cout<<q.back()<<endl;
    cout<<q.front()<<endl; 
    int back = q.back();
    cout<<back<<endl;

    q.pop(); 
    cout<<q.front()<<endl; 

}

void explainPQ()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40); 

    cout<<pq.top()<<endl;
    // while(!pq.empty())
    // {
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    cout<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //Min Heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);

    // while(!pq1.empty())
    // {
    //     cout<<pq1.top()<<"\t";
    //     pq1.pop();
    // }

}

void explain_set()
{
    set<int> st; 
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    auto it = st.find(3);
    //If the item was found then it will return a pointer pointing to that ele 
    //Otherwise to NULL
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<(*it)<<endl;

    auto it1 = st.find(6); 

    st.erase(5);

    auto it2 = st.find(3);
    st.erase(it2);

    // auto it = st.lower_bound();
    // auto it = st.upper_bound();

}

// void explain_multiSet() it is same as set but it also stores the duplicate elements..........

void explainUset()
{
    unordered_set<int> st;
    //Lower_bound and upper_bound function
    //Does not works,rest all functions are same 
    //as above,it does not stores in any
    //particular order it has better complexity 
    //Than set in most cases,except some when collision happens

}

void explain_map()
{
    map<int,int> mpp1;
    map<int,pair<int,int>> mpp2;
    map<pair<int,int>,int> mpp3; 
    mpp1[1] = 2; 
    mpp1.emplace(3,1);
    mpp1.insert({2,4});
    mpp2[1] = {1,2}; 
    mpp2[2] = {3,4};

    for(auto itr:mpp1)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }

    cout<<mpp2[1].first<<"\t"<<mpp2[2].first<<endl;

    mpp3[{2,3}] = 10;

    cout<<mpp3[{2,3}]<<endl;

}
void explainMultiMap()
{
    //
}

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p2.second > p1.second)
        return true;
    else if(p2.second == p1.second)
    {
        if(p1.first > p2.first)
            return true;
    }
    return false;
}

void explainExtra()
{
    vector<int> v1;
    v1.push_back(30);
    v1.push_back(40); 
    v1.push_back(20);
    v1.push_back(10);
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    sort(v1.begin(),v1.end(),greater<int>());
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.push_back({2,2});
    v2.push_back({4,1});

    sort(v2.begin(),v2.end(),comp);

    for(int i=0;i<v2.size();i++) 
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;
    }

    int num = 32; 
    int cnt = __builtin_popcount(num); //gives the count of no of 1's 
    long long n = 123456789123;
    int c = __builtin_popcountll(n);
    cout<<c<<endl;


    string s = "123";
    do
    {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi = *max_element(v1.begin(),v1.end());

    cout<<maxi<<endl;
    
}   

int main()
{
    // explain_pair();
    // explain_vector(); 
    // explain_list();
    // explain_deque();
    // explain_stack();
    // explain_queue(); 
    // explainPQ();
    // explain_set();
    // explain_map();

    explainExtra();

}