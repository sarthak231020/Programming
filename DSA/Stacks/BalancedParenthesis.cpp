#include<bits/stdc++.h> 
using namespace std; 

// struct StackList
// {
//     char data;
//     struct StackList *next;
// };
// typedef struct StackList Node;
// Node *Top = NULL;

// void push(char data) 
// {
//     Node *newNode = (Node *)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = Top;
//     Top = newNode;
// }

// char pop() 
// {
//     if(Top == NULL) 
//     {
//         cout<<"Stack Underflow"<<endl;
//         return INT_MIN;
//     }
//     int data = Top->data;
//     Top = Top->next;
//     return data;
// }

// bool isEmpty() 
// {
//     return Top==NULL;
// }

// char topElement() 
// {
//     if(Top == NULL) 
//     {
//         cout<<"Stack Underflow"<<endl;
//         return INT_MIN;
//     }
//     return Top->data;
// }

// void traverse() 
// {
//     Node *temp = Top;
//     while(temp) 
//     {
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }




int main() 
{
    stack<char> st;
    string S;
    cin>>S;
    bool flag = true;
    for(int i=0;i<S.length();i++) 
    {
        if(S[i] == '(' || S[i] == '{' || S[i] == '[')
            st.push(S[i]);
        else if(S[i] == ')' || S[i] == '}' || S[i] == ']') 
        {
            if(S[i] == ')') 
            {
                if(st.top() == '(') 
                    st.pop();
                else 
                {
                    flag = false;
                    break;
                }
            }
            else if(S[i] == '}')
            {
                if(st.top() == '{')
                    st.pop();
                else 
                {
                    flag = false;
                    break;
                }
            }
            else if(S[i] == ']')
            {
                if(st.top() == '[')
                    st.pop();
                else 
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag == true && st.empty()) 
    {
        cout<<"Parenthesis are balanced"<<endl;        
    }
    else 
    {
        cout<<"Parenthesis not balanced"<<endl;
    }
}