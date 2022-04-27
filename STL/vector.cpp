#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> V(5);  //Creating a vector of size 5

    for(int i=0;i<5;i++)
    {
        V[i] = (i+1)*10;
    }

    cout<<V[0]<<endl<<V[1];

    if(V.empty())
    {
        cout<<"The Vector is Empty"<<endl;
    }
    else
    {
        cout<<"The Vector is not empty"<<endl;
    }

    //In order to Append a value we use push_back......

    cout<<"Before Appending some values The vector look like:"<<endl;
    for(vector<int>::iterator it=V.begin();it!=V.end();it++) 
    {
        cout<<(*it)<<endl;
    }

    V.push_back(2000);
    V.push_back(3000);
    cout<<"After appending some values vector look like:"<<endl;
    for(vector<int>::iterator it=V.begin();it!=V.end();it++)
    {
        cout<<(*it)<<endl;
    }


    // copying a vector to another 

    vector<int> V1(V);

    cout<<"The new Vector we've created via copying elements is:"<<endl;

    for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
    {
        cout<<(*it)<<endl;
    }

    //We can also resize without any hectic by just writing
    //It keeps the present elements as it is while indices are initialized by 0
    V1.resize(10);

    for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
    {
        cout<<(*it)<<endl;
    }

    cout<<"Thats all my honour!!!!!!!!"<<endl;
}

