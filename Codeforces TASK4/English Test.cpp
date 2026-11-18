#include <bits/stdc++.h>

using namespace std;

int main(){

    //Codeforces Task4:

    int size;
    string str;

    getline(cin,str); //to read the full line not just to the first whitespace.

    size=str.size();

    for(int i=0 ; i<size ; i++){
        cout<<str[i]<<" ";
    }

}
