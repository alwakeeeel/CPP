#include <iostream>

using namespace std;

int main(){

    //codeforce:

    long long X,Y;
    
    cin>>X>>Y;

    int summation_result=X+Y;
    long long multiplication_result=X*Y;
    int subtraction_result=X-Y;

    cout<<X<<" + "<<Y<<" = " <<summation_result<<endl
    <<X<<" * "<<Y<<" = "<<multiplication_result <<endl
    <<X<<" - "<<Y<<" = "<<subtraction_result;
    return 0;
}
