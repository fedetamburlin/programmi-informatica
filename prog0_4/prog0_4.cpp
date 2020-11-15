#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Inserire primo numero:";
    cin>>a;
    cout<<"Inserire secondo numero:";
    cin>>b;

    if(a<b)
        cout<<b<<" is larger";
    else if(a==b) 
        cout<<"These numbers are equal";
    else
        cout<<a<<" is larger";
    
}