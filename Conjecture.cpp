#include <iostream>

using namespace std;

int main(){

    //codeforcces task3:

    int n;
    cin>>n;

    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        }else{
            n=n*3;
            n=n+1;

        }
    }
    cout<<n<<" ";
}
