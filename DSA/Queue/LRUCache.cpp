#include<bits/stdc++.h>
using namespace std; 

class Node
{
    public:
    int key;
    int val;
    Node *prev;
    Node *next;

    Node(int k,int v) 
    {
        key = k; 
        val = v;
        prev = next = NULL;
    }
};

int cap;
Node *head,*tail;
unordered_map<int,Node *> m;

void LRUCache(int capacity) 
{
    cap = capacity;
    head = new Node(-1,-1); 
   
    tail = new Node(-1,-1);
    head->next = tail;
    tail->prev=head;
    tail->next = NULL;
    head->prev = NULL;
}

void addNode(Node *newNode)
{
    Node *temp = head->next;
    newNode->next = temp;
    temp->prev = newNode; 
    head->next = newNode;
    newNode->prev = head;
}
 
void deleteNode(Node *deleteNode)
{
    Node *deleteNext = deleteNode->next;
    Node *deletePrev = deleteNode->prev;
    deletePrev->next = deleteNext;
    deleteNext->prev = deletePrev;
}

int get(int key)
{
    if(m.find(key) != m.end()) 
    {
        Node *t = m[key];
        int val = t->val;
        m.erase(key);
        deleteNode(t);
        addNode(t);
        m[key] = head->next;
        return val;
    }
    return -1;
}

void put(int key,int val) 
{
    if(m.find(key) != m.end()) 
    {
        Node *rem = m[key];
        m.erase(key);
        deleteNode(rem);
    }
    if(m.size() == cap)
    {
        m.erase(tail->prev->key);
        deleteNode(tail->prev);
    }
    addNode(new Node(key,val));
    m[key] = head->next;
}

int main() 
{
    LRUCache(3);
    cout<<"Y"<<endl;
    put(1,10);
    put(3,15);
    put(2,12);
    cout<<"RUN"<<endl;
    cout<<get(3)<<endl;
    put(4,20);
    cout<<get(2)<<endl;
    put(4,25);
    cout<<get(6)<<endl;
    return 0;
}