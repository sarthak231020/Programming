#include<bits/stdc++.h> 
using namespace std; 

//Consider 1<= s1.length()==s2.length() <=1000.

unordered_map<string,bool> T;

bool solve(string s1,string s2) 
{
    if(s1.length() != s2.length()) 
    {
        return false;
    }
    if(s1.compare(s2) == 0) 
    {
        return true;
    }

    if(T.find(s1 + " " + s2) != T.end()) 
    {
        return T[s1 + " " + s2];
    }

    
    int n=s1.length();
    bool flag = false; 
    for(int i=1;i<=n-1;i++) 
    {
        bool NSCaseL,NSCaseR,SCaseL,SCaseR;
        if(T.find(s1.substr(0,i)+" "+s2.substr(0,i)) != T.end())
        {
            NSCaseL = T[s1.substr(0,i)+" "+s2.substr(0,i)];
        }
        else 
        {
            NSCaseL = solve(s1.substr(0,i),s2.substr(0,i));
            T[s1.substr(0,i)+" "+s2.substr(0,i)] = NSCaseL;
        }

        if(T.find(s1.substr(i,n-i)+" "+s2.substr(i,n-i)) != T.end())
        {
            NSCaseR = T[s1.substr(i,n-i)+" "+s2.substr(i,n-i)];
        }
        else 
        {
            NSCaseR = solve(s1.substr(i,n-i),s2.substr(i,n-i));
            T[s1.substr(i,n-i)+" "+s2.substr(i,n-i)] = NSCaseR;
        }        

        if(T.find(s1.substr(0,i)+" "+s2.substr(n-i,i)) != T.end())
        {
            SCaseL = T[s1.substr(0,i)+" "+s2.substr(n-i,i)];
        }
        else
        {
            SCaseL = solve(s1.substr(0,i),s2.substr(n-i,i));
             T[s1.substr(0,i)+" "+s2.substr(n-i,i)] = SCaseL;
        }

        if(T.find(s1.substr(n-i,i)+" "+s2.substr(0,i)) != T.end())
        {
            SCaseR = T[s1.substr(n-i,i)+" "+s2.substr(0,i)];
        }
        else 
        {
            SCaseR = solve(s1.substr(n-i,i),s2.substr(0,i));
            T[s1.substr(n-i,i)+" "+s2.substr(0,i)] = SCaseR;
        }


                                    //Not swapped case(before ||)
        if((NSCaseL && NSCaseR)
            ||(SCaseL && SCaseR))
                                    //Swapped case(after ||)
        {
            flag = true;
            break;
        }
    }
    return T[s1+" "+s2] = flag;


}

int main() 
{
    string s1,s2;
    cin>>s1;
    cin>>s2;

    T.clear();

    cout<<solve(s1,s2)<<endl;
}