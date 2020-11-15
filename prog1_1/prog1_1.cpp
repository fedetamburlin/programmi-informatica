#include <iostream>
using namespace std;

void pow1(int b, int e);
void pow2(int b, int e);

int main(){
    int n1,n2;    
    cout<<"Inserisci base:";
    cin>>n1;
    cout<<"Inserisci esponente:";
    cin>>n2;

    int str;
    cout<<"Inserisci:\n  '1' se vuoi usare il for"
        <<"\n  '2' se vuoi usare il while :";
    cin>>str;

    if (str==1) pow1(n1,n2);
    if (str==2) pow2(n1,n2);    

}

void pow1(int b, int e){
    int pow=1;
    for(int i=0;i<e;i++)
        pow=pow*b;
    cout<<"Risultato: "<<pow;
};

void pow2(int b, int e){
    int i=0;
    int pow=1;
    while(i<e){
        pow=pow*b;
        i=i+1;
    }
    cout<<"Risultato: "<<pow;    
};

