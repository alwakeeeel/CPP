#include <iostream>

using namespace std;

int main(){

    //codeforces task3:

    int n , numbers , sum=0 ;

    cin>>n;

    for(int i = 0 ; i< n ; i++){
        cin>>numbers;
        sum=sum+numbers;
    }

    cout<<sum;
    
}
