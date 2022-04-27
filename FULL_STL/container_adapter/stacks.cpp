// Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and (top) an element is removed from that end only.
#include<iostream>
#include<stack>

using namespace std;
void traverse(stack <int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(2);
    s.push(1);
    s.push(5);

    cout<<"The stack is:"<<endl;
    traverse(s);

    cout<<"Size:"<<s.size();
    cout<<"\ntop element:"<<s.top()<<endl;
    cout<<"\npopping element"<<endl;

    s.pop();
    traverse(s);   
    
    if(s.empty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;
    
    //swap is same
    s.emplace(1000); 
    cout<<"Top:"<<s.top()<<endl;
    


    return 0;
}