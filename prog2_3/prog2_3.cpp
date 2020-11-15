#include <iostream>
#define N 100
using namespace std;

int main(){
    char n[N]; int lettera;
    
    cout<<"Inserire parola:";
    cin>>n;
    cout<<"Inserire numero lettera(da sx):";
    cin>>lettera;

    cout<<"Lettera="<<n[lettera-1];

    /*for (int i=0;i<10;i++){
        cout<<n[i]<<", ";
    }*/

}