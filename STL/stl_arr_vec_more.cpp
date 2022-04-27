#include<bits/stdc++.h>
using namespace std;

namespace raj
{
    double val = 50.0;

    double getval()
    {
        return val;
    }
}

struct node
{
    string str;
    int num;
    double doub;
    char x;

    node(str_,num_,doub_,x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

array<int,3> arr; //->{0,0,0}

//Max size of 10^7 ->int,double,char

int arr[10000000];

//max size of 10^8 -> bool

bool arr[100000000];

int main()
{
    //max size of 10^6 -> int,double,char
    int arr[1000000];

    //max size of 10^7 -> bool

    bool arr[10000000];

    double val = 10.0;

    //If we do not write using namespace std;
    // using namespace puts all the value into a space called std if we do not 
    //write using namespace std;
    //Then we have to always write std:: to access that value 

    cout<<val<<endl; // prints 10.0
    // int val = 10; // Multivalue error

    cout<<raj::getval()<<endl;


    node gov;
    //wrong way of initializing 
    gov.str = "Govinda";
    gov.num = 2000;
    gov.doub = 88.0;

    //right way
    node gov = new node("Govinda",2000,88.0,"");

    //We can use that structure to define any kind of data;

    array<int,3> arr; //->{?,?,?}  here ? stands for garbage;

    array<int,5> arr = {1} //->{1,0,0,0,0}

    int arr[10000] = {0};

    array<int,5> arr;

    arr.fill(0);

    arr.at(index);

    for(int i=0;i<5;i++)
    {
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;

    //Iterators 
    //begin() -> points to first element;
    //end() -> points to just after the last element;
    //rbegin() -> points to last element;
    //rend() -> points to just before begin element;

    array<int,5> arr = {1,3,4,5,6};

    for(auto it:arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto it:arr.rbegin();it>arr.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it:arr.end()-1;it>=arr.begin();it--)
    {
        cout<<*it<<" ";
    }

    //For each loop
    for(auto it:arr)
    {
        cout<<it<<" ";
    }

    string s="xhegcwe";

    // x h e g c w e 

    for(auto c:s)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    
    //size
    cout<<arr.size()<<endl;

    //front
    cout<<arr.front()<<endl;

    //back
    cout<<arr.back()<<endl;

    //Vector 

    int arr[50];

    //Segmentation fault if you push_back 10^7 times;

    //vector

    vector<int> arr; //-> {}

    cout<<arr.size()<<endl; // 0
    arr.push_back(0); //{0};
    arr.push_back(2); //{0,2};
    cout<<arr.size()<<endl; // print 2;
    arr.pop_back(); //{0}

    cout<<arr.size()<<endl; //prints 1;

    arr.push_back(0); //{0,0};
    arr.push_back(2); //{0,0,2};

    vec.clear(); //erases all the elements

    vector<int> vec1(4,0); //{0,0,0,0};
    vector<int> vec2(4,10); //{10,10,10,10};

    vector<int> vec3(vec2.begin(),vec2.end());
    vector<int> vec3(vec2); // does the same work

    vector<int> raj;

    raj.push_back(1); //emplace back does the same work but it takes lesser time than push_back;
    raj.push_back(3);
    raj.push_back(2);
    raj.push_back(5); // -> {1,3,2,5}

    vector<int> raj1(raj.begin(),raj.begin()+2); //{1,3};

    //lower bound , upper bound

    //swap swap(v1,v2);

    //to define 2-d vector;
    
    vector<vector<int>> vec;

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);

    vector<int> v3;
    v3.push_back(19);
    v3.push_back(24);
    v3.push_back(27);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);

    // vctr is vector itself on each iteration

    for(auto vctr:vec)
    {
        for(auto it:vctr)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    //we can also do it by 

    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    // define 10*20 vector 

    vector< vector<int> > vec(10,vector<int> (20,0));
    vec.push_back(vector<int> (20,0));

    cout<<vec.size()<<endl;  // 11 

    vec[2].push_back(1);

    vector<int> arr[4];

    arr[1].push_back(1);

    vector<int> arr[4];
    arr[1].push_back(0);

    //10  * 20 * 30 

    vector<vector<vector<int>>> vec(10,vector<vector<int>> (20,vector<int> (30,0)));

    
}