#include <iostream>

using namespace std;

int main(){

    //codeforces Task2:

    string first_name,second_name,third_name,fourth_name;

    cin>>first_name>>second_name;
    cin>>third_name>>fourth_name;

    if(second_name==fourth_name){
        cout<<"Siblings";
    }else{
        cout<<"Not Siblings";
    }

    return 0;
}
