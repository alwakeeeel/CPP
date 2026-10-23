#include <iostream>

using namespace std;

int main(){

    //codeforces task 3:

    int n;
    int number;

    cin>>n;

    for(int i=0 ; i < n ; i++){
        cin>>number;
        if(number%2==0){
            cout<<"EVEN"<<endl;
        }else{
            cout<<"ODD"<<endl;
        }
    }
}
