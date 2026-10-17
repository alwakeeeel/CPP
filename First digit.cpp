#include <iostream>

using namespace std;

int main(){

    //codeforces task2:

    int x,digit;

    cin>>x;

    digit=x/1000;

    if(digit%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;

}
