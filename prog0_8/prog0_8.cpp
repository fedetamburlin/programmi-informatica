#include <iostream>
using namespace std;

int main(){
    int n1,n2;    
    cout<<"Inserisci numero 1:";
    cin>>n1;
    cout<<"Inserisci numero 2:";
    cin>>n2;

    if(n1%n2==0)
        cout<<"yes";
    else
        cout<<"no";
}