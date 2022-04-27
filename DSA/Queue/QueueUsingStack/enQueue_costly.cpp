// #include<bits/stdc++.h> 
// using namespace std;

// class Queue
// {
//     stack<int> st1;
//     stack<int> st2;
//     public:
//     void push(int val)
//     {
//         while(!st1.empty()) 
//         {
//             st2.push(st1.top());
//             st1.pop();
//         }
//         st1.push(val);
//         while(!st2.empty())
//         {
//             st1.push(st2.top());
//             st2.pop();
//         }
//     }
//     bool empty()
//     {
//         if(st1.empty()) 
//             return true; 
//         return false;
//     }
//     int pop()
//     {
//         if(st1.empty())
//             return -1;
//         int val = st1.top();
//         st1.pop();
//         return val;
//     }
    
// };

// int main() 
// {
//     Queue Q;
//     Q.push(1);
//     Q.push(2);
//     Q.push(3);
//     cout<<Q.pop()<<endl;
//     Q.push(4);
//     while(!Q.empty())
//     {
//         cout<<Q.pop()<<" ";
//     }
    
// }

