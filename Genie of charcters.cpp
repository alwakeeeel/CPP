#include <iostream>

using namespace std;

int main(){
    
    //codeforces task2:
    
    char X;

    cin>>X;

    if(X>='0' && X<='9'){
        cout<<"IS DIGIT";
    }else if(X>='A' && X<='Z'){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }else {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }

    return 0;

}
