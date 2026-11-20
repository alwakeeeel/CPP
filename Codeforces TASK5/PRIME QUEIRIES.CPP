#include <bits/stdc++.h>

using namespace std;

int main(){

    //Codeforces Task5:

    int q,x;
    bool prime;

    cin>>q;

    for(int i=0 ; i<q ; i++){
        
        cin>>x;

        prime=true;

        if(x<=1){
            prime=false;
        }else{

            for(int i=2 ; i*i<=x ; i++){
                
                if(x%i==0){
                    prime=false;
                    break;
                }

                if(){
                    cout<<"YES\n";
                }else{cout<<"NO\n";}

            }
        }

    }


}
