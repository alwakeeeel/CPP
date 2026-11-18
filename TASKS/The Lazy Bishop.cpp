
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    // Codeforces task2:

    string A, B;
    cin >> A >> B;

    if (A == B) {
        cout << 0;
        return 0;
    }

    int x1 = A[0] - 'a';
    int y1 = A[1] - '0';

    int x2 = B[0] - 'a';
    int y2 = B[1] - '0';

    if ((x1 + y1) % 2 != (x2 + y2) % 2) {
        cout << -1;
    }
    else if (abs(x1 - x2) == abs(y1 - y2)) {
        cout << 1;
    }
    else {
        cout << 2;
    }

    return 0;
}
