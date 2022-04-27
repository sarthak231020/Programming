#include<bits/stdc++.h>
using namespace std;

vector<int> merged;

void merge(vector<int> v1,vector<int> v2,int N,int M) 
{
    int i=0,j=0;

    while(i<N && j<M) 
    {
        if(v1[i] <= v2[j]) 
        {
            merged.push_back(v1[i]);
            i++;
        }
        else 
        {
            merged.push_back(v2[j]); 
            j++;
        }
    }
    while(i<N) 
    {
        merged.push_back(v1[i]);
        i++; 
    }
    while(j<M) 
    {
        merged.push_back(v2[j]);
        j++;
    }

}

double findMedian(vector<int> nums1,vector<int> nums2) 
{
    if(nums2.size() < nums1.size()) 
        return findMedian(nums2,nums1);
    
    int n1 = nums1.size();
    int n2 = nums2.size();

    int low = 0;
    int high = n1;
    while(low <= high) 
    {
        int cut1 = (low+high)/2;
        int cut2 = (n1+n2+1)/2-cut1;

        if()
    }
}

int main() 
{
    int N,M;
    cin>>N>>M;

    vector<int> v1(N),v2(M);

    for(int i=0;i<N;i++) 
    {
        cin>>v1[i];
    }

    for(int i=0;i<M;i++) 
    {
        cin>>v2[i];
    }

    merge(v1,v2,N,M);

    if(merged.size()%2 == 1) 
    {
        cout<<"Median Element :"<<merged[merged.size()/2]<<endl;
    }    
    else 
    {
        cout<<"Median Element :"<<(merged[((merged.size())/2)-1]+merged[((merged.size())/2)+1])/2<<endl;
    }



    return 0;
}