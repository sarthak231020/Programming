#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/expression-evaluation/ for complete explanation.
int precedence(char c) 
{
    if(c == '*' || c == '/') 
        return 2;
    if(c == '+' || c == '-') 
        return 1; 
    return 0;
}

int applyOp(int val1,int val2,char c) 
{
    if(c == '+') 
        return val1 + val2; 
    if(c == '-') 
        return val1 - val2;
    if(c == '*') 
        return val1 * val2;
    if(c == '/') 
        return val1 / val2;
    return -1;
}

int evaluate(string Tokens) 
{
    stack<int> ops;
    stack<int> values;

    for(int i=0;i<Tokens.length();i++) 
    {
        if(Tokens[i] == ' ') 
            continue;
        else if(Tokens[i] == '(')
            ops.push(Tokens[i]);
        else if(isdigit(Tokens[i])) 
        {
            int val = 0;

            while(i < Tokens.length() && isdigit(Tokens[i]))
            {
                val = val*10 + Tokens[i]-'0';
                i++;
            }
            values.push(val);
            //Since we move to false condition so we have to go back.
            i--;
        }

        else if(Tokens[i] == ')')  // Since it is a close braces so we have to solve it.
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val1 = values.top();
                values.pop();
                int val2 = values.top(); 
                values.pop(); 
                char c = ops.top();
                ops.pop();

                values.push(applyOp(val1,val2,c));
            }

            if(!ops.empty())
            {
                ops.pop(); //finally pop the '('.
            }
        }

        else  //It is an operator.
        {
            while(!ops.empty() && precedence(ops.top()) > precedence(Tokens[i]))
            {
                int val1 = values.top();
                values.pop(); 
                int val2 = values.top();
                values.pop();
                char c = ops.top();
                ops.pop();
                values.push(applyOp(val1,val2,c));
            }

            ops.push(Tokens[i]);
        }
         
    }
    while(!ops.empty()) 
    {
        int val1 = values.top();
        values.pop();
        int val2 = values.top();
        values.pop(); 
        char c = ops.top(); 
        ops.pop();
        values.push(applyOp(val1,val2,c));
    }

    return values.top();
}

int main() 
{
    string s;
    getline(cin,s);

    cout<<evaluate(s)<<endl;
}