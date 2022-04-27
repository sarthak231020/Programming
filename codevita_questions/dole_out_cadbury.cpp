#include<iostream>
using namespace std;

int main()
{
    int minl,maxl,minw,maxw;
    cin>>minl>>maxl>>minw>>maxw;
    int count=0;
    for(int i=minl;i<=maxl;i++)
    {
        for(int j=minw;j<=maxw;j++) 
        {
            int tempi=i,tempj=j,temp;
            if(tempi < tempj)
                swap(tempi,tempj);
            if(tempi%tempj == 0)
            {
                count += tempi/tempj;
                continue;
            }
            while(tempj !=0 && tempj !=1)
            {
                if(tempi < tempj)
                    swap(tempi,tempj);
                temp = tempi;
                tempi = tempj;
                tempj = temp-tempj;
                count++;
            }
            if(tempj == 1)
            {
                count += tempi;
            }
        }
    }
    cout<<count<<endl;
}