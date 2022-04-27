#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int key;
    int data;
    Node *prev;
    Node *next;

    Node(int k,int val) 
    {
        key = k;
        data = val;
        next = prev = NULL;
    }
};

class Solution
{
    public:
    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1,-1); 
    map<int,Node *> mpp;
    int cap;
    Solution(int capacity) 
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
        head->prev = NULL;
        tail->next = NULL;
    }
    void addElement(int key,int data) 
    {
        Node *node = new Node(key,data);
        head->next->prev = node;
        node->next = head->next;
        head->next  = node;
        node->prev = head;
    }

    void delElement(Node *delNode)
    {
        Node *delNext = delNode->next;
        Node *delPrev = delNode->prev;
        delNext->prev = delPrev;
        delPrev->next = delNext;
    }

    int get(int key)
    {
        if(mpp.find(key) != mpp.end()) 
        {
            int data = mpp[key]->data;
            delElement(mpp[key]);
            mpp.erase(key);
            addElement(key,data);
            mpp.insert({key,head->next});
            return data;
        }
        return -1;
    }

    void put(int key,int data) 
    {
        if(mpp.find(key) != mpp.end()) 
        {
            delElement(mpp[key]);
            mpp.erase(key);
        }
        if(mpp.size() == cap)
        {
            int k = tail->prev->key;
            delElement(tail->prev);
            mpp.erase(k);
        }
        addElement(key,data);
        mpp[key] = head->next;
    }

};

int main() 
{
    Solution obj(3);

    cout<<"Y"<<endl;
    obj.put(1,10);
    obj.put(3,15);
    obj.put(2,12);
    cout<<"RUN"<<endl;
    cout<<obj.get(3)<<endl;
    obj.put(4,20);
    cout<<obj.get(2)<<endl;
    obj.put(4,25);
    cout<<obj.get(6)<<endl;
    return 0;
}