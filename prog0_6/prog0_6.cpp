#include <iostream>
using namespace std;

int main(){
    double p=3.14,r,area,circ,diam;
    cout<<"Inserire raggio sfera: ";
    cin>>r;
    cout<<"Diametro: "<<r*2<<endl
        <<"Circonferenza: "<<r*p*2<<endl
        <<"Area: "<<r*r*p;
}