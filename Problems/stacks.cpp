// #include<iostream.h>
// #include<stdlib.h>
// #include<stdbool.h>
// #include<string.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>


struct Stack
{
    char ch;
    struct Stack *next;
}*top = NULL;

typedef struct Stack NODE; 

bool is_empty()
{
    NODE *temp;
    int count = 0;
    temp = top;

    while(temp)
    {
        temp = temp->next;
        count++;
    }

    if(count == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}


void push(char ch)
{
    NODE *new;

    new = (NODE *)malloc(sizeof(NODE));

    new->ch = ch;
    // printf("Enter the data:"); 
    // scanf("%c",&new->ch);

    new->next = top;
    top = new;
}

void pop()
{
    char ch;
    if(top == NULL)
    {
        cout<<"Stack Underflow...............\n";
    }

    else
    {
        ch = top->ch;
        top = top->next;
        cout<<"The deleted element is:"<<ch;
    }
}

void traverse()
{
    NODE *temp;

    temp = top;

    while(temp)
    {
        cout<<"Character:",temp->ch;
        temp = temp->next;
    }

}


void checking_symbol()
{
    char str[100];
    int i;
    
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == '(')
        {
            push('(');
        }

        else if(str[i] == ')')
        {
            pop();
        }
    }
    
    if(is_empty())
    {
        cout<<"All pairs are pure\n";
    }

    else
    {
        cout<<"There is mistake of ')'";
    }
}


void main() 
{
    int choice;
    char ch;

    do
    {
        cout<<"1.Push\n2.Pop\n3.Traverse\n4.Checking symbol\n5.Exit\nEnter Your Choice:";
        scanf("%d",&choice);

        if(choice == 1)
        {
            cout<<"Enter the character:";
            cin>>ch;
            push(ch);
        }
        else if(choice == 2)
        {
            pop();
        }
        else if(choice == 3)
        {
            traverse();
        }

        else if(choice == 4)
        {
            checking_symbol();
        }
        else
        {
            cout<<"Exiting program.....................\n";
            exit(0);
        }
    }while(choice != 5);
}