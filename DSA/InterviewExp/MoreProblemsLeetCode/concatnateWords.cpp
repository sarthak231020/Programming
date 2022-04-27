#include<bits/stdc++.h> 
using namespace std;

void solveBrut(vector<string> v)
{
     sort(v.begin(),v.end());
    vector<string> ans;
    for(int i=0;i<v.size();i++) 
    {   int k=0;
        for(int j=0;j<i;j++) 
        {
            if(v[i].find(v[j]) != std::string::npos)
            {
                k++;    
                if(k >= 2) 
                {
                    ans.push_back(v[i]);
                    break;
                }
            }
        }
    }

    for(auto s:ans) 
    {
        cout<<s<<" ";
    }
    cout<<endl;
}

//Optimized Solution
int mini = INT_MAX;
unordered_set<string> tempCache;

bool canForm(string word,unordered_set<string> dict) 
{
    if(tempCache.find(word) != tempCache.end()) 
        return true;
    for(int i=mini;i<=word.length()-mini;i++) 
    {
        string left = word.substr(0,i);
        string right = word.substr(i);

        if(dict.find(left) != dict.end()) 
        {
            if(dict.find(right) != dict.end()) 
            {
                tempCache.insert(word);
                return true;
            }
        }
    }
    return false;
}


vector<string> findAll(vector<string> v) 
{
    vector<string> ans;

    unordered_set<string> dict;

    for(string word:v) 
    {
        if(word.length() == 0) 
            continue;
        dict.insert(word);
        int l = word.length();
        mini = min(mini,l);
    }

    for(string word:v) 
    {
        if(canForm(word,dict))
        {
            ans.push_back(word);
        }
    }

    for(auto s:ans) 
    {
        cout<<s<<" ";
    }
    cout<<endl;
    return ans;
}

int main() 
{
    // int N; 
    // cin>>N;
    // vector<string> v(N);

    // for(int i=0;i<N;i++) 
    // {
    //     string s;
    //     getline(cin,s);
    //     v[i] = s;
    // }
    
    vector<string> v = {"cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"};
    
    findAll(v);
}