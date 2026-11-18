#include <bits/stdc++.h>

using namespace std;

int main(){

    //Codeforces task4:

    int N;
        
    cin>>N;
    int array[N];

    for(int i=0 ; i<N ; i++){
        cin>>array[i];
    }

    sort(array,array+N,greater<int>());

    for(int i = 0; i < N; i++){
    cout << array[i] << " ";
}
}
