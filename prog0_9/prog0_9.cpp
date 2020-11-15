#include <iostream>
using namespace std;

void stampa(int l, int c);

int main(){
    int M=int('A');
    int m=int('a');
    int n=int('0');
    
    stampa(M,26);
    stampa(m,26);
    stampa(n,10);
}

void stampa(int l,int c){
    for(int i=l;i<(l+c);i++)
        cout<<char(i)<<", ";
    cout<<endl;
}