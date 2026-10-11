#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout<< fixed << setprecision(2);
    //codeforce:

    int Integer;
    long long Long;
    char  Char;
    float Float;
    double Double;

    cin>> Integer;
    cin>> Long;
    cin>> Char;
    cin>> Float;
    cin>> Double;

    cout<<Integer<<"\n";
    cout<<Long<<"\n";
    cout<<Char<<"\n";
    cout<<Float<<"\n";
    cout<<Double<<"\n";

    return 0;
}
