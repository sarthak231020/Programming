#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,g;
	cin>>n>>m>>g;
	vector<int> time(n);
	vector<int> cloth(m);
	int i = 0;
	while(n--)
	{
		cin>>time[i];
		i++;
	}
	i = 0;
	while(m--)
	{
		cin>>cloth[i];
		i++;
	}
	int count=0;
	while(g--)
	{
		for(int i=0;i<time.size()-1;i++)
		{
			for(int j=0;j<cloth.size();j++)
			{
				if((time[i+1]-time[i] >= cloth[j]) && (cloth[j]!=0))
				{
					cloth[j] = 0;
					count++;
				}
			}
		}
	}
	cout<<count<<endl;
}