#include <iostream>
#include "funzioni2_3.hpp"
#define N 100  //lunghezza massima array
using namespace std;

int main(){
    char n[N]; int lettera;
    
    cout<<"Inserire parola:";
    cin>>n;
    cout<<"Inserire numero lettera(da sx):";
    cin>>lettera;

    cout<<"Lettera="<<n[lettera-1];
    char* np=cleanArray(n);


    //prova stampa array

    /*for (int i=0;i<10;i++){
        cout<<n[i]<<", ";
    }*/ 
}

