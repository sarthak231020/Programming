#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,coin;
        cin>>n;
        int arr[3] = {0,0,0};
        while(n--) 
        {
            cin>>coin;
            if(coin == 5)
            {
                arr[0] = arr[0]+1;
            }

            else if(coin == 10) 
            {
                if(arr[0] >= 1)
                { 
                    arr[0] -= 1; 
                    arr[1] += 1;
                }
            }
            
            else if(coin == 15)
            {
                if(arr[0] >= 2)
                {
                    arr[0] -= 2;
                    arr[2] += 1;
                }
                else if(arr[1] >= 1) 
                {
                    arr[1] -= 1;
                    arr[2] += 1;
                }
            }
        }
        if(arr[0] || arr[1] < 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

