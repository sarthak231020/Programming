// C++ program to evaluate area of a polygon using
// shoelace formula
#include <bits/stdc++.h>
using namespace std;

// (X[i], Y[i]) are coordinates of i'th point.
double polygonArea(vector<int> X,vector<int> Y, int n)
{
	// Initialize area
	int area = 0;

	// Calculate value of shoelace formula
	int j = n - 1;
	for (int i = 0; i < n; i++)
	{   
        
        // cout<<"Values of X["<<j<<"] is:"<<X[j]<<" X["<<i<<"] is:"<<X[i]<<" Y["<<j<<"] is:"<<Y[j]<<" X["<<i<<"] is:"<<X[i]<<endl; 
		area = (area)+((X[j] + X[i]) * (Y[j] - Y[i]));
//         cout<<"Calculated Area is :"<<area<<endl;
		j = i; // j is previous vertex to i
	}

	// Return absolute value
	return abs(area / 2.0);
}

// Driver program to test above function
int main()
{
    int N;
    cout<<"Enter number of N in Polygon:";
    cin>>N; 

    vector<int> X(N);
    vector<int> Y(N);
    cout<<"Enter the coordinates of the Polygon:";
    for(int i=0;i<N;i++)
    {
        cin>>X[i]>>Y[i];
    }

	cout << polygonArea(X, Y, N);
}


// #include <iostream>
// #include <tuple>
// #include <vector>
 
// using namespace std;
 
// double shoelace(vector<pair<double, double>> points) {
// 	double leftSum = 0.0;
// 	double rightSum = 0.0;
 
// 	for (int i = 0; i < points.size(); ++i) {
// 		int j = (i + 1) % points.size();
// 		leftSum  += points[i].first * points[j].second;
// 		rightSum += points[j].first * points[i].second;
// 	}
 
// 	return 0.5 * abs(leftSum - rightSum);
// }
 
// int main() {
// 	vector<pair<double, double>> points = {
// 		make_pair( 3,  3),
// 		make_pair( 1, 3),
// 		make_pair(3,  1),
// 		make_pair( 3,  3),
// 	};
 
// 	auto ans = shoelace(points);
// 	cout << ans << endl;
// }