#include <iostream>
#include <cmath>

using namespace std;

int main(){

    //codeforces task2:

    double A,B,C,D,R1,R2;

    cin>>A>>B>>C>>D;

    R1=D*log(C);
    R2=B*log(A);

    if(R2>R1){
        cout<<"YES";
    }else if(R1>R2){
        cout<<"NO";
    }else{
        cout<<"NO";
    }

    return 0;

}
