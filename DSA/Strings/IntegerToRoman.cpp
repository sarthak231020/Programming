#include<bits/stdc++.h>
using namespace std;
//Mine AC Solution Check below for more readable one.
class Solution {
public:
    string intToRoman(int num) 
    {
        vector<pair<string,int>> roman;
        roman.push_back({"M",1000});
        roman.push_back({"CM",900});
        roman.push_back({"D",500});
        roman.push_back({"CD",400});
        roman.push_back({"C",100});
        roman.push_back({"XC",90});
        roman.push_back({"L",50});
        roman.push_back({"XL",40});
        roman.push_back({"X",10});
        roman.push_back({"IX",9});
        roman.push_back({"V",5});
        roman.push_back({"IV",4});
        roman.push_back({"I",1});
        
        string res = "";
        for(auto i:roman) 
        {
            string sym = i.first;
            int val = i.second;
            if(num >= val) 
            {
                for(int i=0;i<num/val;i++) 
                {
                    res += sym;
                }
                num = num%val;
                if(num == 0) 
                    break;
            }
        }
        
        return res;
    }
};

//Just More Readable Code most voted on leetcode.
class Solution {
public:
    string intToRoman(int num) 
    {
        string res;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        for(int i=0; num != 0; i++)
        {
            while(num >= val[i])
            {
                num -= val[i];
                res += sym[i];
            }
        }
        
        return res;
    }
};