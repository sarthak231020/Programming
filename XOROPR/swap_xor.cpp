#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int X,Y;
    X = 10;
    Y = 5;
    cout<<"X:"<<X<<" Y:"<<Y<<endl;
    // in XOR 
    // 0^0 = 0
    // 0^1 = 1
    // 1^0 = 1
    // 1^1 = 0
    X = X^Y; //(1010^0101) = (1111) = 15
    Y = X^Y; //(1111^0101) = (1010) = 10 
    X = X^Y; //(1111^1010) = (0101) = 5

    cout<<"X:"<<X<<" Y:"<<Y<<endl;
    
}