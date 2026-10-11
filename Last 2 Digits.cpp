#include <iostream>

using namespace std;

int main(){

    //codeforce:

    long long A,B,C,D,MULTIPLY,MULTIPLY1;

    cin>>A>>B>>C>>D;

    MULTIPLY=(A%100)*(B%100);
    MULTIPLY1=(C%100)*(D%100);
    
    long long lastDigit=(MULTIPLY*MULTIPLY1)%100;

    cout<<lastDigit;

    return 0;
}
