#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() 
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);

    int flag = 0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] > s2[i])
        {
            flag = 1;
            break;
        }
        else if(s1[i] < s2[i])
        {
            flag = -1;
            break;
        }
    }
    cout<<flag<<endl;
    // cout<<s1.compare(s2); //1 if s1 is bigger one lexicographically 
    //-1 if s2 is bigger one lexicographically
    //0 if s1 == s2
}
