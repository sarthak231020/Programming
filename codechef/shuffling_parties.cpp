#include<bits/stdc++.h> 
using namespace std; 


int main() 
{
    int T;
    cin>>T; 
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> V(N);
        for(int i=0;i<N;i++)
        {
            cin>>V[i];
        }

        vector<int> even,odd;
        for(int i=0;i<N;i++)
        {
            if(V[i]%2 == 0)
            {
                even.push_back(V[i]); 
            }
            else 
            {
                odd.push_back(V[i]);
            }
        }


        vector<int> B(N+1,0);
        int count = 0;
        for(int i=1;i<=N;i+=2)
        {
            if(count == even.size()) 
                break;
            B[i] = ((even[count]+i)%2);
            count++;
        }
        count = 0;
        for(int i=2;i<=N;i+=2)
        {
            if(count == odd.size())
                break;
            B[i] = ((odd[count]+i)%2);
            count++;
        }
        
        cout<<accumulate(B.begin(),B.end(),0)<<endl;    
    }
}