#include <iostream>

using namespace std;

int main(){

    //codeforcces task2:

/*You are given an expression containing two integers A
and B
, an operator S
, an equality sign Q
, and a displayed result C
. The operator S
can be +, -, or *, and Q
is the equality sign =.*/

    int A,B,C,add,subtract,multiply;
    char S,Q;

    cin>>A>>S>>B>>Q>>C;

    add=A+B;
    subtract=A-B;
    multiply=A*B;

    if( S=='+' && C==add ){
        cout<<"Yes";
    }else if(S=='+' && C!=add){
        cout<<add;
    }else if(S=='-' && C==subtract){
        cout<<"Yes";
    }else if(S=='-' && C!=subtract){
        cout<<subtract;
    }else if(S=='*' && C==multiply){
        cout<<"Yes";
    }else if(S=='*' && C!=multiply){
        cout<<multiply;
    }

    return 0;

}
