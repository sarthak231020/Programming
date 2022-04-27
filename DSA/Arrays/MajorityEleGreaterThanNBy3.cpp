#include<bits/stdc++.h>
using namespace std; 

pair<int,int> solve(vector<int> v,int N) 
{   
    //There at max 2 majority element 
    //Here majority element is > floor(N/3).
    int cnt1 = 0,cnt2 = 0;
    int num1=INT_MIN,num2 = INT_MIN;

    for(int i=0;i<N;i++) 
    {
        if(v[i] == num1) 
            cnt1++;
        else if(v[i] == num2) 
            cnt2++;
        else if(cnt1 == 0)
        { 
            num1 = v[i]; 
            cnt1=1;
        }
        else if(cnt2 == 0) 
        {
            num2 = v[i];
            cnt2 = 1;
        }
        else 
        {
            cnt1--;
            cnt2--;
        }
    }

    //Since This algorithm does not gurantee that these are majority element 
    //SO 
    
    int cntNum1 = 0,cntNum2=0;
    for(int i=0;i<N;i++) 
    {
        if(v[i] == num1) 
            cntNum1++;
        else if(v[i] == num2) 
            cntNum2++;
    }
    

    pair<int,int> ans = {-1,-1};
    if(cntNum1 > N/3) 
        ans.first = num1;
    if(cntNum2 > N/3) 
        ans.second = num2;
    

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

    pair<int,int> ans = solve(v,N);     
    cout<<ans.first<<" "<<ans.second<<endl;


    return 0;
}