#include <iostream>
#include "funz2_6.hpp"
using namespace std;

int main(){
    int len=(250+40)*4;
    double a[len];
    for (int i = 0; i < len; i++)
        a[i]=-40+0.25*i;

    cout<<"Digita:\n *1 per tabella celsius\n"
                 <<" *2 per tabella fahrenheit\n"
                 <<" *3 per entrambe"; 
    int choice;
    cin>>choice;

    if (choice==1)
        stampa(a);
    else if (choice==2){
        double b[len];
        double* c=celToFar(a,b);
        stampa(c);
    }
    else if (choice==3){
        double b[len];
        double* c=celToFar(a,b);
        stampa(a,c);
    }
    
    
    
    


}