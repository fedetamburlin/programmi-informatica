#include <iostream>
using namespace std;
 
 int main() {
    double somma,differenza; int resto;
    double prodotto,quoziente,n1,n2;
    
    cout<<"Inserisci numero 1:";
    cin>>n1;
    cout<<"Inserisci numero 2:";
    cin>>n2;
    somma=n1+n2;
    differenza=n1-n2;
    prodotto=n1*n2;
    quoziente=n1/n2;
    resto=int(n1)%int(n2);        
             
    cout<<"La somma dei 2 numeri: "<<somma<<"\n";
    cout<<"La differenza dei 2 numeri: "<<differenza<<"\n";
    cout<<"Il prodotto dei 2 numeri: "<<prodotto<<"\n";
    cout<<"Il quoziente dei 2 numeri: "<<quoziente<<"\n";
    cout<<"Il resto della divisione intera dei 2 numeri: "<<resto<<"\n";
 }