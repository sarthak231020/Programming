#include <bits/stdc++.h>
using namespace std;
int sumOfNums(int a)
{
    int temp = a;
    int sum = 0;
    while (temp != 0)
    {
        int val = temp % 10;
        sum += val;
        temp = temp / 10;
    }
    return sum;
}

void getk(string N, int k)
{
    int count = 0, total = 0;   
    int num = atoi(N.c_str());
    for (int i = 0; i < num; i++)
    {
        int total = sumOfNums(i);
        if (total % k == 0)
        {
            count += 1;
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    int k;
    cin >> n;
    cin >> k;
    getk(n, k);
    return 0;
}
