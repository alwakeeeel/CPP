#include <iostream>

using namespace std;

int main(){

    //codeforces task2:

    int x,y;

    cin>>x>>y;

    if(y==x+1){
        cout<<"YES";
    }else if(y==x-1){
        cout<<"YES";
    }else if(x==1 && y==10 || x==10 && y==1 ){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;

}
