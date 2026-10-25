#include <iostream>

using namespace std;

int main(){

    //codeforces sheet3:

    int N,table;

    cin>>N;

    for(int i=1; i<=12;i++){
        table=N*i;
        cout<<N<<" "<<"* "<<i<<" = "<<table<<endl;
    }
}
