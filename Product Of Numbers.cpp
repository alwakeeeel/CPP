#include <iostream>

using namespace std;

int main(){

    //codeforces task3:

    long long n,number,product=1;

    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>number;
        product=number*product;
    }

    cout<<product<<endl;
    
}
