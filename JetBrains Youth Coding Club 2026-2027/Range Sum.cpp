
#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long prefix[100005] = {0};

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }

    while (q--) {
        int L, R;
        cin >> L >> R;

        cout << prefix[R] - prefix[L - 1] << "\n";
    }

    return 0;
}
