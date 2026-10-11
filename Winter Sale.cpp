#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //codeforce:
    
    double X,P;

    cin>>X>>P;
    
    double precentPaid=100-X;

    precentPaid=precentPaid/100;

    double price=P/precentPaid;
    cout<<fixed<<setprecision(2)<<price;

    cout<<price;

    return 0;
}
