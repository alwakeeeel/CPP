#include <iostream>

using namespace std;

int main(){

    //codeforces Task3:

    int x,y,smaller=0,gcd=1;

    cin>>x>>y;

    if(x>y){
        smaller=y;
    }else{
        smaller=x;
    }

    for(int i=1 ; i<=smaller ; i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }

    cout << gcd;
    
}
