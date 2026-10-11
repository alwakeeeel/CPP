#include <iostream>
#include <iomanip>

    using namespace std;

int main(){
    //codeforce
    cout << fixed << setprecision(9);

    double Area,R;
    double Pi=3.141592653;

    cin>>R;

    Area=Pi*R*R;


    cout<<Area;
    return 0;
}
