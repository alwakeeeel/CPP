#include <iostream>

using namespace std;

int main() {
    
    //codeforcees task 2:

    int A, B, C;
    cin >> A >> B >> C;

    int A1 = A;
    int B1 = B;
    int C1= C;

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }

    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    cout << A << " " << B << " " << C << "\n";
    cout << A1 << " " << B1 << " " << C1 << "\n";

    return 0;
    
}
