#include<bits/stdc++.h> 
using namespace std; 

//If any doubts watch below video.
// https://www.youtube.com/watch?v=QhPdNS143Qg 
class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0,leftMax = 0;
        for(auto c:s) 
        {
            if(c == '(')
            {
                leftMin += 1;
                leftMax += 1;
            }
            else if(c == ')')
            {
                leftMin -= 1;
                leftMax -= 1; 
            }
            else 
            {
                leftMin -= 1; // * as ')'
                leftMax += 1; // * as '(' 
            }
            if(leftMax < 0) //Means there is leading ')' so we can never balance it.
                return false;
            if(leftMin < 0) //To leave all invalid possibilities consider some * as '' The ')' shouldn't be used to match any '(' appearing after it.
                leftMin = 0;
        }
        return (leftMin == 0);
    }
};