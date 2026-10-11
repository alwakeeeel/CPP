#include <iostream>

using namespace std;

int main(){

    //codeforce:

    long long A,B,C,D,MULTIPLY;

    cin>>A>>B>>C>>D;

    MULTIPLY=A*B*C*D;
    
    long long lastDigit=MULTIPLY%100;

    cout<<lastDigit;

    return 0;
}
