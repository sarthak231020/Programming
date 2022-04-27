#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    int arr[n]; 

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // sort(Startingiterator(included),lastiterator(excluded))

    sort(arr,arr+n); //Sorts in increasing order

    sort(arr+1,arr+4); //sorts from 1st 2nd 3rd index;

    vector<int> vec(5,0);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end()); //[)

    // vec->{1, 6, 2, 7, 4}
    //       0  1  2  3  4 

    // sort it so that only indexes from 1 to 3 
    // final vec -> {1,2,6,7,4} 

    sort(vec.begin()+1,vec.begin()+4); // [1,4)


    //If i wanna to reverse
    // reverse(startIterator,endIterator) -> [) 

    //If I want to find the maximum element in any index range
    //i to j give me maximum

    //*max_element(firstIterator,lastIterator)
    int maxi = INT_MIN; 

    for(int k=i;k<=j;k++)
    {
        if(vec[k] > maxi)
        {
            maxi = vec[k];
        }
    }

    int el = *max_element(arr,arr+n);
    cout<<el<<endl;
    el = *min_element(arr,arr+n);
    cout<<el<<endl;
    
    el = *max_element(vec.begin(),vec.end());
    cout<<el<<endl;
    el = *min_element(vec.begin(),vec.end());
    cout<<el<<endl;

    //SUM 
    //I give you a range I want to find the sum in that range
    //i - j ,tell me the sum in that range i to j

    int sum = 0;

    for(int k=i;k<=j;k++)
    {
        sum+= arr[k];
    }

    cout<<sum<<endl;

    //stl function for sum
    // accumulate(startIterator,endIterator,initialvalue)
    int sum1 = accumulate(arr,arr+n,0);
    cout<<sum1<<endl;
    sum1 = accumulate(arr+1,arr+4,0);
    cout<<sum1<<endl;

    //arr[] = {1,6,7,1,2,1,3} 
    //x = 1
    // tell me how many times the element 1 occurs in the array

    int cnt=0;
    //O(n)

    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    //stl function for count in unsorted order
    // count(startIterator,lastIterator,key)
    
    int cnt1 = count(arr,arr+n,1);
    cout<<cnt1<<endl;

    // arr[] -> {1,2,5,1,2,4,4}
    //I want to find the first occurance of 2 
    //it is in the index 1 

    int x;
    cout<<"Enter the item for first occurance:";
    cin>>x;
    int ind = -1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {   
            ind=i;
            break;
        }
    }
    if(ind == -1)
        cout<<"item not found"<<endl;
    else
        cout<<"first occurance of "<<x<<" is:"<<i<<endl;

    // stl function for it 
    //arr[] = {1,2,5,1,2,4,4}
    //find(startIterator,endIterator,key);

    auto it = find(arr,arr+n,2); //return an iterator 

    if(it == vec.end())
    {
        cout<<"element is not present"<<endl;
    }
    else
    {
        cout<<"element first present at:"<<it-vec.begin()<<endl;
    }
    
    //NEXT PERMUTATION
    
    // next_permutation(startIterator,endIterator) returns true whenever next lexicographic permutation for input exists 
    // and modify it to next permutation

     // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 
 
    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba

    string s = "bca"  
    bool res = next_permutation(s.begin(),s.end())
    
    if(res == true)
    {
        cout<<s<<endl;
    }

    //Given any random string print all permutation of it 
    sort(s.begin(),s.end());

    do
    {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // similarly for array
    int arr1[] = {3,2,1};
    sort(arr1,arr1+3);
    do
    {
        for(int i=0;i<3;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(arr1,arr1+3));




}