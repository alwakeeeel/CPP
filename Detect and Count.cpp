#include <iostream>

using namespace std;

int main(){

    //codeforces task3:

    int n,number,even=0,odd=0,positive=0,negative=0;

    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>number;

        if(number%2==0){
            even+=1;

        }else{
            odd+=1;

        }

        if(number>0){
            positive+=1;

        }else if(number<0){
            negative+=1;

        }

    }
    cout<<even;
    cout<<odd;
    cout<<positive;
    cout<<negative;
}
