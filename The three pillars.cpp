
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //codeforces task2:
    
    long long A, B, C;
    char Ch;

    cin >> A >> B >> C >> Ch;

    if ((A + B + C) % 3 != 0 || (A + B + C) % 5 == 0) {
        cout << "Pillar 1 Failed";
        return 0;
    }

    if (!((Ch >= 'A' && Ch <= 'Z') && ((Ch + A) % 2 == 0))) {
        cout << "Pillar 2 Failed";
        return 0;
    }

    bool pythagorean =
        (A * A + B * B == C * C) ||
        (A * A + C * C == B * B) ||
        (B * B + C * C == A * A);

    bool product =
        (A * B == C) ||
        (A * C == B) ||
        (B * C == A);

    if (!pythagorean && !product) {
        cout << "Pillar 3 Failed";
        return 0;
    }

    cout << "Unlocked";

    return 0;
}
