#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //codeforces task2:

    long double A,B,C,D,R1,R2;

    cin>>A>>B>>C>>D;

    R1=D*logl(C);
    R2=B*logl(A);

    if(R2>R1){
        cout<<"YES";
    }else if(R1>R2){
        cout<<"NO";
    }else{
        cout<<"NO";
    }

    return 0;

}
