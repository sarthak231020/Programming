// #include<bits/stdc++.h>
// using namespace std;

// void traverse(stack<char> st)
// {
//     cout<<"CONTENTS OF STACK ARE:"<<endl;
//     while(!st.empty())
//     {
//         cout<<st.top();
//         st.pop();
//     }
    
// }
//                 //   st.top() curr_operator
// // bool comp_prece(char ch,char ch1)
// // {
// //     if((ch == '+' && ch1 == '/') || (ch == '-' && ch1 =='/') || (ch == '-' && ch1 == '*') || (ch == '+' && ch == '*') || (ch == '-' && ch1 =='^') || (ch == '+' && ch1 =='^') || (ch == '/' && ch1 == '^') || (ch == '*' && ch1 == '^'))
// //     {
// //         return true;
// //     }
// //     return false;
// // }

// // int main()
// // {
// //     cout<<comp_prece('^','-')<<endl;
    
// // }
// // bool comp_prece_equal(char ch,char ch1)
// // {
// //     if((ch == '+' && ch1 == '/') || (ch == '-' && ch1 =='/') || (ch == '-' && ch1 == '*') || (ch == '+' && ch == '*') || (ch == '-' && ch1 =='^') || (ch == '+' && ch1 =='^') || (ch == '/' && ch1 == '^') || (ch == '*' && ch1 == '^') || (ch=='+' && ch1 == '-') || (ch == '-' && ch1 == '+') || (ch == '*' && ch1 == '/') || (ch == '/' && ch1 == '*'))
// //     {
// //         return true;
// //     }
// //     return false;
// // }
// // bool contain_slash(stack<char> s)
// // {
// //     if(s.empty())
// //         return true;
// //     while(!s.empty())
// //     {
// //         if(s.top() == '(')
// //             return true;
// //         s.pop();
// //     }
// //     return false;
// // }

// // bool curr_greater_prece(char ch,stack<char> s)
// // {   
// //     if(s.empty())
// //         return true;
// //     else
// //     {
// //         while(!s.empty())
// //         {
// //             if(comp_prece(s.top(),ch) == false)
// //                 return false;
// //             s.pop();
// //         }
// //         return true;
// //     }
// //     return false;
// // }

// int prece(char c)
// {
//     if(c == '^')
//         return 3;
//     else if(c == '*' || c == '/')
//         return 2;
//     else if(c == '+' || c == '-')
//         return 1;
//     else 
//         return -1;
// }

// int main() 
// {
//     string s;
//     getline(cin,s);

//     stack<char> st;

//     for(int i=0;i<s.length();i++)
//     {
//         // cout<<"Iteration No:"<<i+1<<endl; 
//         if((s[i]>='a' && s[i] <='z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
//             cout<<s[i];
//         else if(s[i] == '(')
//         {
//             st.push('(');
//         }
//         else if(s[i] == ')')
//         {
//             while(st.top() != '(')
//             {
//                 cout<<st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else 
//         {
//             while(!st.empty() && prece(s[i]) <= prece(st.top())) 
//             {
//                 cout<<st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//         // cout<<endl;
//         // traverse(st);
//         // cout<<endl;
//     }
//     while(!st.empty())
//     {
//         cout<<st.top();
//         st.pop();
//     }
// }


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    int prece(char c)
    {
        if(c == '^')
            return 3;
        else if(c == '*' || c == '/')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
        else 
            return -1;
    }
    void traverse(stack<char> s) 
    {
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
    }
    string infixToPostfix(string s)
    {
        string result = "";
        stack<char> st;
    
        for(int i=0;i<s.length();i++)
        {
            // cout<<"Iteration No:"<<i+1<<endl; 
            if((s[i]>='a' && s[i] <='z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                result += s[i];
            else if(s[i] == '(')
            {
                st.push('(');
            }
            else if(s[i] == ')')
            {
                while(st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
            else 
            {
                while(!st.empty() && prece(s[i]) <= prece(st.top())) 
                {
                    result += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            // cout<<endl;
            // traverse(st);
            // cout<<endl;
        }
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        return result;
    }// Your code here
};

int main()
{
    Solution s;
    string str;
    getline(cin,str);
    cout<<s.infixToPostfix(str)<<endl;
}