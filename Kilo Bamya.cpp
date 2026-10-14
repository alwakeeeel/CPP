#include <iostream>

using namespace std;

int main(){

    //codeforces task 2:

    int a,b,c;

    cin>>a>>b>>c;
/*
a, represents Ouda's hand.
b, represents Gom3a's hand.
c, represents Farid's hand.
*/
    if(  b != a && b != c){
        cout<<"  Gom3a ";
    }else if( a != b && a != c){
        cout<<"Ouda ";
    }else if( c != b && c != a){
        cout<<" Farid";
    }else{
        cout<<"Tie";
    }

    return 0;
}
