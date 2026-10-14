#include  <iostream>

using namespace std;

int main(){

    //codeforces task 2:

    char result1,result2;

    cin>>result1>>result2;

    if(result1=='R' && result2=='P'){
        cout<<"p2";
    }else if(result1=='R' && result2=='S'){
        cout<<"p1";
    }else if(result1=='P' && result2=='R'){
        cout<<"p1";
    }else if(result1=='P' && result2=='S'){
        cout<<"p2";
    }else if(result1=='S' && result2=='P'){
        cout<<"p1";
    }else if(result1=='S' && result2=='R'){
        cout<<"p2";
    }else{
        cout<<"draw";
    }

    return 0;
}
