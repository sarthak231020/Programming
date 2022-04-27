#include<iostream>
using namespace std;

int main() 
{
    int T,N; 
    cin>>T;

    while(T--)
    {   
        int cp=0,mp=0,ccard,mcard,cpower,mpower;
        cin>>N;

        while(N--)
        {
            cpower = 0;
            mpower = 0;
            cin>>ccard>>mcard;

            while(ccard != 0)
            {
                cpower = cpower+(ccard%10);
                ccard  = ccard/10;
            }

            while(mcard != 0)
            {
                mpower = mpower+(mcard%10);
                mcard  = mcard/10;
            }


            if(mpower == cpower)
            {
                cp += 1;
                mp += 1;
            }

            else if(mpower > cpower)
            {
                mp += 1;
            }

            else if(cpower > mpower)
            {
                cp += 1;
            }
        }

        if(cp > mp)
            cout<<0<<" "<<cp<<endl;
        else if(mp > cp) 
            cout<<1<<" "<<mp<<endl;
        else
            cout<<2<<" "<<cp<<endl;
    }
}