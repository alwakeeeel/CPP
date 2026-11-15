#include <iostream>

using namespace std;

int main(){

    //Codeforces Task4:

    int N,X,Age;
    bool found=false;

    cin>>N;
    int array[N];

    for(int i=0 ; i<N ; i++){
        cin>>array[i];
    }

    cin>>X;

    for(int i=0 ; i<N ; i++){

        if(array[i]==X){
        found=true;
        }

    }

    if(found==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}
