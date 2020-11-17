#include <iostream>
#include <iomanip>
using namespace std;

//da fahrenheit a celsius
double* farToCel(double a[], double* ris){
    for (int i = 0; i < 290*4; i++)
        ris[i]= (a[i]-32)*5/9;
    
    return ris;
}

//da celsius a fahrenheit
double* celToFar(double a[], double ris []){    
    for (int i = 0; i < 290*4; i++)
        ris[i]= 1.8*a[i]+32;

    return ris;

}

//calcola lunghezza array
int lunghezza(double a[]){
    
    int i=0;
    do{
        i++;
    } while (a[i]!='\0');
    
    return i;
}

//stampa array in tabella
void stampa(double a[]){
    
    for (int i = 0; i < 290*4; i++)
        cout<<a[i]<<endl;    
}
//stampa e tabella completa
void stampa(double a[],double b[]){

    cout<<"Celsius      Fahreneit\n";    
    for(int i = 0; i < 290*4; i++)
        cout<<setprecision(5)<<a[i]<<"      "<<b[i]<<endl;

}