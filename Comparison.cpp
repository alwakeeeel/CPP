#include <iostream>

using namespace std;

int main(){

    //codeforces task 2:

    int A,B;
    char S;

    cin>>A>>S>>B;

    if( A>B  && S =='>'){
        cout<<"Right";
    }else if( A<B && S =='<'){
        cout<<"Right";
    }else if(A==B && S =='=' ){
        cout<<"Right";
    }else{
        cout<<"Wrong";
    }

    return 0;
}
