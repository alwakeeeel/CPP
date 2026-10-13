#include <iostream>

using namespace std;

int main() {

    //codeforces TASK 2:
    
    long long A, B;
    char op;

    cin >> A >> op >> B;

    if (op == '+') {
        cout << A + B;
    } 
    else if (op == '-') {
        cout << A - B;
    } 
    else if (op == '*') {
        cout << A * B;
    } 
    else if (op == '/') {
        cout << A / B;
    }

    return 0;
}
