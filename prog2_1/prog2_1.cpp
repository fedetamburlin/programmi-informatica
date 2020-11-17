#include <iostream>
#define N 10 //quanti numeri?
using namespace std;
int* popolaArray(int[]);
int somma(int*);

int main(){
    int n[N]={};
    int *p=popolaArray(n);
    int s=somma(p);
    cout<<"Somma="<<s;
}

int* popolaArray(int n []){
    for (int i=0;i<N;i++){
        cout<<"Inserire numero:";
        cin>>n[i];
        if (n[i]==0)
            return n;
    }
    return n;
}

int somma(int*n){
    int s=0;
    for (int i=0;i<N;i++){
        s+=n[i];        
    }
    return s;
}