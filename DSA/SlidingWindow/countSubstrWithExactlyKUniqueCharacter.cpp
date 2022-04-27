// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     string s;
//     getline(cin,s);
//     int K;
//     cin>>K;

//     map<char,int> mpK; //it will max contain K char
//     map<char,int> mp; //it will max contain K-1 char
//     int i=0,j=0,k=0;
    
//     vector<string> ans;
//     while(j < s.length()) 
//     {
//         while(i<s.length() && mp.size() < K) 
//         {
//             mp[s[i]]++;
//             i++;
//         }
//         if(i == s.length()) 
//             break;
//         i--;
//         while(j < s.length() && mpK.size() <= K)
//         {
//             mpK[s[j]]++;
//             j++;
//         } 
//         if(j == s.length())
//             break;
//         j--;

//         while(k<s.length() && mp.size() == K-1 && mpK.size() == K)
//         {
//             int l = i+1;
//             while(l <= j) 
//             {
//                 ans.push_back(s.substr(k,l-k+1));
//                 l++;
//             }
//             mp[s[k]]--;
//             mpK[s[k]]--;
//             if(mp[s[k]] == 0) 
//                 mp.erase(s[k]);
//             if(mpK[s[k]] == 0) 
//                 mpK.erase(s[k]);
//             k++;
//         }

//         cout<<ans.size()<<endl;

//         for(auto i:ans) 
//         {
//             cout<<i<<endl;
//         }

//     }
// }

//Simple Solution on GFG

// C++ program to count number of substrings with
// exactly k distinct characters in a given string
#include<bits/stdc++.h>
using namespace std;

// Function to count number of substrings
// with exactly k unique characters
int countkDist(string str, int k)
{
	int n = str.length();

	// Initialize result
	int res = 0;

	// To store count of characters from 'a' to 'z'
	int cnt[26];

	// Consider all substrings beginning with
	// str[i]
	for (int i = 0; i < n; i++)
	{
		int dist_count = 0;

		// Initializing array with 0
		memset(cnt, 0, sizeof(cnt));

		// Consider all substrings between str[i..j]
		for (int j=i; j<n; j++)
		{
			// If this is a new character for this
			// substring, increment dist_count.
			if (cnt[str[j] - 'a'] == 0)
				dist_count++;

			// Increment count of current character
			cnt[str[j] - 'a']++;

			// If distinct character count becomes k,
			// then increment result.
			if (dist_count == k)
				res++;
			if(dist_count > k) break;
		}
	}

	return res;
}

// Driver Program
int main()
{
	string str = "abcbaa";
	int k = 3;
	cout << "Total substrings with exactly "
		<< k <<" distinct characters :"
		<< countkDist(str, k) << endl;
	return 0;
}
