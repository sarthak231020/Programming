#include<bits/stdc++.h>
using namespace std; 

map<string,int> mp;

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
            return exp[i] == 'T';
            // if(exp[i] == 'T')
            //     return 1;
            // else 
            //     return 0; 
        }
        else
        {
            
            return exp[i] == 'F';
            // if(exp[i] == 'F')
            //     return 1;
            // else 
            //     return 0;
        }
    }

    string temp = to_string(i)+"_"+to_string(j)+"_"+to_string(isTrue);

    if(mp.find(temp) != mp.end())
    {
        return mp[temp];
    }

    int ans = 0;
    for(int k=i+1;k<=j-1;k = k+2)
    {
        int leftTrue;
        int leftFalse;
        int rightTrue;
        int rightFalse;
        string temp_l;
        temp_l = to_string(i)+"_"+to_string(k-1)+"_"+to_string(isTrue);
        if(isTrue==false && mp.find(temp_l) != mp.end())
        {
            leftFalse =  mp[temp_l];
        }
        else
        {
            leftFalse = solve(exp,i,k-1,false);
        }

        if(isTrue==true && mp.find(temp_l) != mp.end())
        {
            leftTrue =  mp[temp_l];
        }
        else
        {
            leftTrue = solve(exp,i,k-1,true);
        }
        string temp_r;
        temp_r = to_string(k+1)+"_"+to_string(j)+"_"+to_string(isTrue);
        if(isTrue==false && mp.find(temp_r) != mp.end())
        {
            rightFalse =  mp[temp_r];
        }
        else
        {
            rightFalse = solve(exp,k+1,j,false);
        }

        if(isTrue==true && mp.find(temp_r) != mp.end())
        {
            rightTrue =  mp[temp_r];
        }
        else
        {
            rightTrue = solve(exp,k+1,j,true);
        }
        
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
    return mp[temp] = ans;
}


int main() 
{
    string exp;
    cin>>exp;
    cout<<exp<<endl;
    mp.clear();
    cout<<solve(exp,0,exp.length()-1,true)<<endl;
    
    return 0;
}