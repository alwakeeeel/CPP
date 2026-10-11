#include <iostream>
using namespace std;
int main(){

    int number1 , number2;
    int total;
    int  subtract;
    char op=1;
    
    cout<<"Enter two numbers:\n";
    cin>>number1>>number2;

    cout<<"Choose ur operator";
    cin>>op;

    switch(op){
        case '+':
        total=number1+number2;
        cout<<"Your sum="<<total;
        break;

        case '-':
        subtract=number1-number2;
        cout<<"Your Subtraction="<<subtract;
        break;
    }
    
    return 0;
}
