#include <bits/stdc++.h>
using namespace std;

// Function to calculate the maximum Fibonacciness for given inputs
int getMaxFibonacciness(int a1, int a2, int a4, int a5) {
    // a3 can be any integer, calculate possibilities for Fibonacciness
    int maxFibonacciness = 0;
    for (int a3 = -200; a3 <= 200; ++a3) {
        int count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        maxFibonacciness = max(maxFibonacciness, count);
    }
    return maxFibonacciness;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5; // Input four integers
        cout << getMaxFibonacciness(a1, a2, a4, a5) << endl;
    }
    return 0;
}
