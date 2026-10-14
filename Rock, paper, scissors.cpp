#include  <iostream>

using namespace std;

int main(){

    //codeforces task 2:

    char result1,result2;

    cin>>result1>>result2;

    if(result1=='R' && result2=='P'){
        cout<<"P2";
    }else if(result1=='R' && result2=='S'){
        cout<<"P1";
    }else if(result1=='P' && result2=='R'){
        cout<<"P1";
    }else if(result1=='P' && result2=='S'){
        cout<<"P2";
    }else if(result1=='R' && result2=='P'){
        cout<<"P2";
    }else if(result1=='R' && result2=='S'){
        cout<<"P1";
    }

    return 0;
}
