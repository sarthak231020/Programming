// #include<bits/stdc++.h>
// using namespace std;

// void insert_at_bottom(stack<int> &s,int ele)
// {
//     if(s.empty())
//     {
//         s.push(ele);
//         return;
//     }
//     int top = s.top();
//     s.pop();
//     insert_at_bottom(s,ele); 
//     s.push(top);   
// }

// void reverse_stack(stack<int> &s)
// {
//     if(s.empty())
//     {
//         return;
//     }
//     int top = s.top(); 
//     s.pop();
//     reverse_stack(s);
//     insert_at_bottom(s,top);
// }

// int main() 
// {
//     int n;
//     cin>>n;
//     stack<int> s;

//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         s.push(x);
//     }

//     // reverse_stack(s);

//     while(!s.empty())
//     {
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     cout<<endl;
// }

#include<bits/stdc++.h>
using namespace std;


void traverse(stack<int> &s)
{
    if(s.empty())
        return;
    int x = s.top();
    cout<<x<<" ";
    s.pop();
    traverse(s);
    s.push(x);
}

void insert_at_bottom(stack<int> &s,int ele)
{
    if(s.empty())
    {
        s.push(ele);
        return;
    }
    int top = s.top();
    s.pop();
    insert_at_bottom(s,ele);
    s.push(top);
}

void reverse_stack(stack<int> &s)
{
    if(s.empty()) 
        return;
    int top = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s,top);
    
}

int main()
{
    int n;
    cin>>n;

    stack<int> s;

    for(int i=0;i<n;i++)
    {
        int x; 
        cin>>x;
        s.push(x);
    }

    traverse(s);
    cout<<endl;
    reverse_stack(s);
    traverse(s);
}
