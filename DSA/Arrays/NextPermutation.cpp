#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        
        if(v.size() == 1) 
        {
            return;
        }
        if(v.size() == 2) 
        {
            reverse(v.begin(),v.end());
            return;
        }
        bool flag = false;
        int flag_ind = 0;
        for(int i=v.size()-1;i>=0;i--) 
        {
            if(i-1 >= 0)
            {
                if(v[i-1] < v[i])
                {
                    flag = true;
                    flag_ind = i-1;
                    break;
                }
            }
        }
        if(flag == false) 
        {
            reverse(v.begin(),v.end());
            return ;
        }
        int flag_min = flag_ind+1;
        for(int i=flag_ind+1;i<v.size();i++) 
        {
            if(v[flag_ind] < v[i])
            {
                if(v[flag_min]>=v[i])
                    flag_min = i;
            }
        }
        swap(v[flag_ind],v[flag_min]);
        reverse(v.begin()+flag_ind+1,v.end());

        }
};
int main() 
{

}