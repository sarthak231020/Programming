#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> //for accumulate(first_iterator,last_iterator,initial_value_of_sum)..........

using namespace std;

void show(vector<int> v)
{

    for(vector<int>::iterator itr=v.begin();itr!=v.end();itr++) 
    {
        cout<<*itr<<"  ";
    }
    cout<<endl;
    // for(int i=0;i<5;i++) 
    // {
    //     cout<<v[i]<<"  ";
    // }
    // cout<<"\n\n";
}

int main()
{
    vector<int> v1;
    for(int i=0;i<5;i++) 
    {
        v1.push_back((i+1)*100);
    }

    cout<<"Now vector look like:"<<endl;
    
    show(v1); 

    reverse(v1.begin(),v1.end());
    cout<<"After reversal:";
    show(v1);

    cout<<"Maximum Element:"<<*max_element(v1.begin(),v1.end())<<endl;

    cout<<"Minimum Element:"<<*min_element(v1.begin(),v1.end())<<endl;

    cout<<"The accumalation(sum till specified range):"<<accumulate(v1.begin(),v1.end(),0)<<endl;//1500

    cout<<"The accumulation till only 3 elements:"<<accumulate(v1.begin(),v1.begin()+3,0)<<endl;//1200(500+400+300)
    v1.push_back(500);
    v1.push_back(500);


    cout<<"The count of 500 from begin to end:"<<count(v1.begin(),v1.end(),500)<<endl;
    cout<<"The count of 100 from begin to end:"<<count(v1.begin(),v1.end(),100)<<endl;

    find(v1.begin(),v1.end(),500)!=v1.end()?cout<<"\nElement found\n":cout<<"\nElement not fount"<<endl;
    
    show(v1);

   

    // v1.unique();
    show(v1);

}

