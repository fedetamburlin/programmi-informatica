#include <iostream>
using namespace std;

int findfigure(long a, long b);
int pow(long b, long e);

int main(){
    long num,cifra;    
    cout<<"Inserisci numero:";
    cin>>num;
    cout<<"Inserisci cifra: ";
    cin>>cifra;
    
    cout<<"Cifra: "<<findfigure(num,cifra);

}

int findfigure(long a, long b){
    long c=a%(pow(10,b));
    c=c/pow(10,b-1);
    return c;
};

int pow(long b, long e){
    long pow=1;
    for(int i=0;i<e;i++)
        pow=pow*b;
    return pow;
};