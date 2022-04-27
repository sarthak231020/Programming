#include<string.h>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static int comparator(string s1,string s2) 
    {
        int p1 = s1.find(' ');
        string id1 = s1.substr(0,p1);
        string rest1 = s1.substr(p1+1,s1.size());
        
        int p2 = s2.find(' ');
        string id2 = s2.substr(0,p2);
        string rest2 = s2.substr(p2+1,s2.size());
        
        if(!isdigit(rest1[0]) && isdigit(rest2[0]))
            return true;
        else if(isdigit(rest1[0]) && !isdigit(rest2[0])) 
            return false;
        else if(!isdigit(rest1[0]) && !isdigit(rest2[0])) 
        {
            if(rest2.compare(rest1) == 0) 
                return id1 < id2;
            else 
                return rest1 < rest2;
        }
        return false;
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
        stable_sort(logs.begin(),logs.end(),comparator);
        return logs;
    }
};






