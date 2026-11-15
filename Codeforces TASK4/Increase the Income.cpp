#include <iostream>

using namespace std;

int main(){

    //Codeforces Task4:

    int N,k;

    cin>>N;

    int array[N];
    int after[N];
    
    cin>>k;

    for(int i=0 ; i<N ; i++){
        cin>>array[i];
        after[i]=array[i]+k;
    }

    for(int i=0 ; i<N ; i++){
        cout<<after[i]<<" ";
    }
}
