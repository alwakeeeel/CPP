
#include <iostream>
using namespace std;

int main() {
    int N, a, b, c, d, trainee_score, total;

    cin >> N;

    a = N / 1000;
    b = (N / 100) % 10;
    c = (N / 10) % 10;
    d = N % 10;

    trainee_score = a * b + 2 * c + d;

    total = trainee_score;

    if (trainee_score >= 10) {
        total = trainee_score / 10 + trainee_score % 10;
    }

    cout << total;

    return 0;
}
