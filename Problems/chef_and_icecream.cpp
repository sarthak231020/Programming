#include<iostream>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    int pair = 0; 
    string S; 
    while(T--)
    {
        cin>>S;
        int pair = 0;

        for(int i=0;i<S.size()-1;i++)
        {
            if((S[i]=='x' && S[i+1]=='y') || (S[i] == 'y' && S[i+1] == 'x'))
            {
                pair = pair+1;
                i++;
            }
        }

        cout<<pair<<endl;
        
    }
}