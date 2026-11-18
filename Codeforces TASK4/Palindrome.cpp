
#include <bits/stdc++.h>

using namespace std;

int main(){

    ///Codeforces Task4:

    int N;
    cin >> N;

    int array[N];
    bool palindrome = true;

    for(int i = 0; i < N; i++){
        cin >> array[i];
    }

    for(int i = 0; i < N / 2; i++){

        if(array[i] != array[N - 1 - i]){
            palindrome = false;
        }

    }

    if(palindrome){
        cout << "YES";
    }else{
        cout << "NO";
    }

}
