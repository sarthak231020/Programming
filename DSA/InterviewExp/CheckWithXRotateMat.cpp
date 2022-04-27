#include<bits/stdc++.h> 
using namespace std;

// https://practice.geeksforgeeks.org/problems/lets-play0201/1/?page=4&difficulty[]=1&difficulty[]=2&company[]=Amazon&sortBy=latest#

class Solution{
public:
    int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++) 
            {
                if(mat[i][j+x%m] != mat[i][j])
                    return 0;
            }
        }
        return 1;
        // code here
    }
};

int main() 
{

}