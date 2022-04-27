#include<bits/stdc++.h> 
using namespace std;

struct Node
{
    int key;
    int val;
    int cnt;
    Node *prev,*next;   

    Node(int _key,int _val) 
    {
        key = _key;
        val = _val;
        cnt = 1;
        prev = next = NULL;
    }
};


struct List
{
    int size;
    Node *head,*tail;
    
    List() 
    {
        size = 0;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head;
    }

    void addFront(Node *newNode) 
    {
        Node *temp = head->next; 
        newNode->next = temp;
        newNode->prev = head;
        temp->prev = newNode;
        head->next = newNode;
        size++;
    }

    void deleteNode(Node *deleteNode) 
    {
        Node *deleteNext = deleteNode->next;
        Node *deletePrev = deleteNode->prev;
        deletePrev->next = deleteNode;
        deleteNext->prev = deletePrev;
        size--;
    }
}

class LFUCache
{
    map<int,Node *> keyNode;
    map<int,List *> freqListMap;
    int maxSizeCache;
    int minFreq;
    int currSize;
    public:
    LFUCache(int capacity) 
    {
        maxSizeCache = capacity;
        minFreq = 0;
        currSize = 0;
    }

    void updateFreqList(Node *node) 
    {
        keyNode.erase(node->key);
        freqListMap[node->cnt]->deleteNode(node);

        if(node->cnt == minFreq && freqListMap[minFreq]->size == 0) 
        {
            minFreq++;
        }

        List *nextFreqList = new List(); 
        if(freqListMap.find(node->cnt+1) != freqListMap.end())
        {
            nextFreqList = freqListMap[node->cnt+1];
        }

        node->cnt += 1;
        
        nextFreqList->addFront(node);
        freqListMap[node->cnt] = nextFreqList;
        keyNode[node->key] = node;

    }

    void get(int key) 
    {
        if(keyNode.find(key) != keyNode.end())
        {
            Node *node = keyNode[key];
            int value = node->val; 
            updateFreqList(node);
            return value;
        }
        return -1;
    }

    void put(int key,int val) 
    {
        if(maxSizeCache == 0) 
            return;
        
        if(keyNode.find(key) != keyNode.end()) 
        {
            Node *node = keyNode[key];
            node->val = val;
            updateFreqList(node);
        }
        else 
        {
            if(currSize == maxSizeCache)
            {
                List *list = freqListMap[minFreq];
                keyNode.erase(list->tail->prev->key);
                list->deleteNode(list->tail->prev);
                currSize--;
            }
            currSize++;
            minFreq = 1;
            List *listFreq = new List();
            if(freqListMap.find(minFreq) != freqListMap.end()) 
            {
                listFreq = freqListMap[minFreq];
            }
            Node *node = new Node(key,val);

            listFreq->addFront(node);
            keyNode[key] = node;
            freqListMap[minFreq] = listFreq;
        }

    } 


}

int main() 
{

}