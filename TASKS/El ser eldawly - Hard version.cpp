#include <bits/stdc++.h>
using namespace std;

int main() {

    //codeforce:
    
    string N;
    cin >> N;

    int a = N[0] - '0';
    int b = N[1] - '0';
    int c = N[2] - '0';
    int d = N[3] - '0';

    int X = a * b + 2 * c + d;

    if (X >= 10) {
        X = X / 10 + X % 10;
    }

    cout << X << '\n';

    return 0;
}

