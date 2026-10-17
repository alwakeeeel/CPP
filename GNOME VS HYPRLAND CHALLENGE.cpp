#include <iostream>

using namespace std;

int main(){

    //codeforces task2:

    int R,P,HP;

    cin>>R>>P;

    if(R>=8 && P>=10){
        HP=P+5;
        cout<<"GNOME"<<" "<<HP;
    }else if(R>=8){
        HP=P+2;
        cout<<"GNOME"<<" "<<HP;
    }else if(R<=4 && R>=1 && P>=10){
        HP=P+3;
        cout<<"Hyprland"<<" "<<HP;
    }else if(R<=4 && R>=1){
        HP=P+6;
        cout<<"Hyprland"<<" "<<HP;
    }else if(R<8 && R>4 && P >= 10){
        HP=P-2;
        cout<<"Neither"<<" "<<HP;
    }
    else{
        HP=P+1;
        cout<<"Neither"<<" "<<HP;
    }
    
    return 0;

}
