#include <iostream>
using namespace std;
 int main() {
     int fattori=10;
     float prodotto=1.0;
     for (int i=1; i<=fattori; ++i){
         float n;
         cout<<"Inserisci fattore "<<i<<":";
         cin>>n;
         prodotto=n*prodotto;    
         }     
     cout<<"Il prodotto dei 3 numeri: "<<prodotto;
 }