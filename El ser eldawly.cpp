#include <iostream>

using namespace std;

int main(){

    //codeforce:

    int N,a,b,c,d,trainee_score;

    cin>>N;

    a=N/1000;
    b=N/100;
    b=b%10;
    c=N/10;
    c=c%10;
    d=N%10;

    trainee_score=a*b+2*c+d;

    cout<<trainee_score;

    return 0;
}
