
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    // Codeforces task V: Almost Trapped

    char piece;
    string A, B;

    cin >> piece >> A >> B;

    int x1 = A[0] - 'a';
    int y1 = A[1] - '0';

    int x2 = B[0] - 'a';
    int y2 = B[1] - '0';

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if (piece == 'Q') {
        if (x1 == x2 || y1 == y2 || dx == dy) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    else if (piece == 'K') {
        if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}
