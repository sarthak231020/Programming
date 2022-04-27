#include<bits/stdc++.h>
using namespace std;

//O(N^2)
int solveBrut(vector<int> v,int N) 
{
    int res = INT_MIN;

    for(int i=0;i<N;i++) 
    {
        int maxi = 1;
        for(int j=i;j<N;j++) 
        {
            maxi *= v[j];
            res = max(res,maxi);
        }
    }
    return res;
}

//O(N)
int solveOpt(vector<int> v,int N) 
{
    int res = INT_MIN; 

    int currMax = 1,currMin = 1;

    for(int i=0;i<N;i++) 
    {
        if(v[i] == 0) 
        {
            currMax = 1;
            currMin = 1;
            continue;
        }
        int temp = v[i]*currMax; //Since CurrMax gets Updated and we need previous wala currMax.
        currMax = max(v[i]*currMax,max(v[i],v[i]*currMin));
        currMin = min(temp,min(v[i],v[i]*currMin));
        res = max(res,currMax);
    }

    return res;

}

//Another Optimized Solution But it will take O(2N)
int solveOpt2(vector<int> v,int N) 
{
    // https://www.youtube.com/watch?v=jzQ-f2uU0UU 
    //It is based on max prod array every time either with start or till end never lies in between.
    int ans = INT_MIN; 
    int currProd = 1;
    for(int i=0;i<N;i++) 
    {
        currProd *= v[i];
        ans = max(ans,currProd);
        if(currProd == 0) 
            currProd = 1;
    }

    currProd = 1;
    for(int i=N-1;i>=0;i--)     
    {
        currProd *= v[i];
        ans = max(ans,currProd);
        if(currProd == 0) 
            currProd = 1;
    }

    return ans;
    
}


int main() 
{
    int N;
    cin>>N; 
    vector<int> v(N); 

    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }


    cout<<solveOpt(v,N)<<endl;
}