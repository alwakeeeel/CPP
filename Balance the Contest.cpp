#include <iostream>

using namespace std;

int main(){

    //codeforces task2:

    int a,b,c,n;

    cin>>a>>b>>c>>n;

    int sum=a+b+c;

    if(a==0 || b==0 || c==0 ){
        cout<<"NO";
    }else if(n>sum ){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    return 0;

}
