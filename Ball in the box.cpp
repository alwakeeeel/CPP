#include <iostream>

using namespace  std;

int main(){

    //codeforces task2:

    int A,B,divide,divideI;

    cin>>A>>B;

    divide=A%B;
    divideI=B%A;

    if( divide==0 || divideI==0 ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;

}
