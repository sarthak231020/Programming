#include <iostream>
#include <vector>
using namespace std;

const long kMod = 1000000007;

int main() {
    int t;
    cin >> t;
    while (t--) {
        size_t n;
        cin >> n;

        vector<long> a(n+1);
        for (size_t i = 0; i < n+1; ++i) {
            cin >> a[i];
            a[i] = a[i]%kMod;
        }

        if (n == 1) {
            long total = (2*a[0]*a[1])%kMod;
            cout << total << endl;
            continue;
        }

        long totalScores = 0;
        long nextCoeff = 2;
        long coeffSum = (2*a[0])%kMod;

        for (size_t i = 1; i < n+1; ++i) {
            totalScores = ((totalScores*2)%kMod+(a[i]*coeffSum)%kMod)%kMod;
            coeffSum = (coeffSum+(a[i]*nextCoeff)%kMod)%kMod;
            nextCoeff = (nextCoeff*2)%kMod;
        }
        
        cout << totalScores << endl;
    }

    return 0;
}