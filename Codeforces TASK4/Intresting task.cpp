#include <iostream>

using namespace std;

int main(){

    //Codeforces Task4:

    int N,min,max,minindex=0,maxindex=0;

    cin>>N;
    int array[N];

    for(int i=0 ; i<N ; i++){
        cin>>array[i];
    }

    max=array[0];

    for(int i=0 ; i<N ; i++){

        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }

    min=array[0];

    for(int i =0 ; i<N ; i++ ){
        
        if(array[i]<min){
            min=array[i];
            minindex=i;
        }

    }

        swap(array[minindex],array[maxindex]);

    for(int i=0 ; i<N ; i++){

        cout<<array[i]<<" ";

    }

    return 0;
}
