#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //codeforces task2:

    double N;

    cin>>N;

    int integer = N;

    if(N==integer){
        cout<<"int"<<" "<<integer;
    }else{
        double floatpart=N-integer;
        
        cout << fixed << setprecision(3);
        cout<<"float" << " " << integer << " " << floatpart;
    }

    return 0;

}
