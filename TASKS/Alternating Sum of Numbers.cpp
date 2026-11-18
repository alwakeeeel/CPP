#include <iostream>

using namespace std;

int main(){
    //codeforces task3:
    int t,n,numbers,alternate;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        cin>>n;
        alternate=0;
        for(int j = 0 ; j < n ; j++ ){
            cin>>numbers;
            if(j%2==0){
                alternate=alternate+numbers;
            }else{
                alternate=alternate-numbers;
            }
        }
        cout<<alternate<<" ";
    }
}
