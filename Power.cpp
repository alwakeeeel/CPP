#include <iostream>

using namespace std;

int main(){  

    //codeforces task3:

    long long x,table=1;
    int y;
    
    cin>>x>>y;

    for(int i=0 ; i<y ; i++){
        table=table*x;
    }
    cout<<table;
}
