#include <iostream>
using namespace std;

int main() {
    int n=0,contatore=0,somma=0;
    double media=0;
     do{
     cout<<"Inserire numero:";
     cin>>n;
     if(n%2==0){
        contatore++;
        somma+=n; 
    }      
    }while(n!=0);

media=somma/(contatore-1); //-1 perchè nel contatore conta anche lo zero come pari
cout<<"Average:"<<media;
}