#include<bits/stdc++.h>
using namespace std; 

int count1 = 0;

int solve(string exp,int i,int j,bool isTrue) 
{
    if(i > j) 
    {
        return 0 ;
    }
    if(i == j) 
    {
        if(isTrue == true)
        {
            if(exp[i] == 'T')
                return 1;
            else 
                return 0; 
        }
        else
        {
            if(exp[i] == 'F')
                return 1;
            else 
                return 0;
        }
    }
    int ans = 0;
    for(int k=i+1;k<=j-1;k = k+2)
    {
        int leftTrue = solve(exp,i,k-1,true);
        int leftFalse = solve(exp,i,k-1,false);
        int rightTrue = solve(exp,k+1,j,true);
        int rightFalse = solve(exp,k+1,j,false);
        // int ans = 0;
        if(exp[k] == '&') 
        {
            if(isTrue == true)
            {
                ans = ans+(leftTrue*rightTrue);
            } 
            else 
            {
                ans = ans+((leftFalse*rightTrue)+(leftTrue*rightFalse)+(leftFalse*rightFalse));
            }
        }
        else if(exp[k] == '|') 
        {
            if(isTrue == true) 
            {
                ans = ans+((leftFalse*rightTrue)+(leftTrue*rightFalse)+(leftTrue*rightTrue));
            }
            else
            {
                ans = ans+(leftFalse*rightFalse);
            }
        }
        else 
        {
            if(isTrue == true) 
            {
                ans = ans+((leftFalse*rightTrue)+(leftTrue*rightFalse));
            }
            else
            {
                ans = ans+((leftFalse*rightFalse)+(leftTrue*rightTrue));
            }
        }
        // cout<<"ans:"<<ans<<endl;  
        // ans1 = max(ans1,ans);
    }

    // cout<<ans1<<endl;
    return ans;
}


int main() 
{
    string exp;
    cin>>exp;
    cout<<exp<<endl;

    cout<<solve(exp,0,exp.length()-1,true)<<endl;
    


    return 0;
}