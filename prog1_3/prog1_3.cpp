#include <iostream>
using namespace std;

int ncifre(int n);
int pow(int b, int e);
int cifrapos(int a, int b);

int main(){
    int n;
    cout<<"Inserire numero: ";
    cin>>n; 
    int cifre=ncifre(n);
    int error=0;

    for(int i=0;i<cifre/2;i++)
        if(cifrapos(n,i+1)!=(cifrapos(n,cifre-i)))
            error++;
    if (error==0)
        cout<<"Palindromo! Zio cane";
    else
        cout<<"Non palindromo, mona";    
}

int ncifre(int n){
    int i=1;
    while(n>10){
        n=n/10;
        i++;        
    }
    return i;
};

int cifrapos(int a, int b){
    int c=a%(pow(10,b));
    c=c/pow(10,b-1);
    return c;
}

int pow(int b, int e){
    int pow=1;
    for(int i=0;i<e;i++)
        pow=pow*b;
    return pow;
};