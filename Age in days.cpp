#include <iostream>

using namespace std;

int main(){

    //codeforce:

    int day,days,months,years;

    cin>>days;

    years=days/365;
    day=days%365;
    months=day/30;
    day=day%30;
    
    cout<<years<<months<<day;
    
    return 0;
}
