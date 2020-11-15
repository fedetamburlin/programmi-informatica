#include <iostream>
using namespace std;

int main(){
    double somma,media;
    double prodotto,n1,n2,n3;
    
    cout<<"Inserisci numero 1:";
    cin>>n1;
    cout<<"Inserisci numero 2:";
    cin>>n2;
    cout<<"Inserisci numero 3:";
    cin>>n3;
    somma=n1+n2+n3;
    prodotto=n1*n2*n3;  
    media=somma/3;   

    if(n1<n2&&n2>n3)
        cout<<n2<<" is larger"<<endl;
    else if (n1>n2&&n1>n3)
        cout<<n1<<" is larger"<<endl;
    else if(n1==n2&&n2==n3) 
        cout<<"These numbers are equal"<<endl;
    else
        cout<<n3<<" is larger";
             
    cout<<"La somma dei 3 numeri: "<<somma<<"\n";
    cout<<"Il prodotto dei 3 numeri: "<<prodotto<<"\n";
    cout<<"La media dei 3 numeri: "<<media<<"\n";

}