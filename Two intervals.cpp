#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    //codeforces task 2:

    int l1,r1,l2,r2,start,end;

    cin>>l1>>r1>>l2>>r2;

    start=max(l1,l2);
    end=min(r1,r2);

    if(start<=end){
        cout<<start<<" "<<end;
    }else{
        cout<<-1;
    }

    return 0;

}
