//Selection Sort It selects minimum element in each iteration and put it as right position 
//It is In place But Not Stable 
//Takes O(N^2) time 
// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int N;
//     cin>>N;
//     vector<int> V(N);
//     for(int i=0;i<N;i++)
//     {
//         cin>>V[i];
//     }

//     for(auto i:V)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<N;i++)
//     {   
//         int min_ele = INT_MAX;
//         int min_ind = 0;
//         for(int j=i;j<N;j++)
//         {
//             if(V[j] < min_ele)
//             {
//                 min_ele = V[j];
//                 min_ind = j;
//             }
//         }
//         swap(V[min_ind],V[i]);
//     }

//     for(auto i:V)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

//Insertion Sort Its Just like Playing Cards 
//It is In place and stable Understand It by below dry run 
// 12, 11, 13, 5, 6
// Let us loop for i = 1 (second element of the array) to 4 (last element of the array)
// i = 1. Since 11 is smaller than 12, move 12 and insert 11 before 12 
// 11, 12, 13, 5, 6
// i = 2. 13 will remain at its position as all elements in A[0..I-1] are smaller than 13 
// 11, 12, 13, 5, 6
// i = 3. 5 will move to the beginning and all other elements from 11 to 13 will move one position ahead of their current position. 
// 5, 11, 12, 13, 6
// i = 4. 6 will move to position after 5, and elements from 11 to 13 will move one position ahead of their current position. 
// 5, 6, 11, 12, 13 

//Best case O(N){when elements are already Sorted},Worst case 1/2*N^2{When Elements are sorted in decreasing order and we have to sort in increasing order},Average Case 1/4 N^2

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0;i<N;i++)
    {
        cin>>V[i];
    }
    
    for(int i=0;i<N;i++)
    {
        int ele = V[i];
        int j;
        for(j=i-1;j>=0 && V[j]>ele;j--)
        {
            V[j+1] = V[j];
        }
        V[j+1] = ele;
        // int k;
        // for(k=i;k>j;k--)
        // {
        //     V[k] = V[k-1];
        // }
        // V[k+1] = ele;
        for(auto it:V)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    for(auto i:V)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
}   