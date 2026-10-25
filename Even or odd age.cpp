#include <iostream>

using namespace  std;

int main(){

    //codeforces task3:

    int N,age,maxEven=0,minOdd=10000;

    cin>>N;

    for(int i=0 ; i<N ; i++){
        cin>>age;
        if(age%2==0){
            if(maxEven<age){
                maxEven=age;
            }
        }
        if(age%2!=0){
            if(minOdd>age){
                minOdd=age;
            }
        }
    }
    cout<< maxEven<<" "<< minOdd;
}
