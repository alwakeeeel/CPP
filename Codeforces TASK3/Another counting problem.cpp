
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long n, b2, b;
    int cnt = 0;

    cin >> n;

    for (long long a = 1; a < n; a++) {

        b2 = n * n - a * a;
        b = sqrt(b2);

        if (b * b == b2 && b > a) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
