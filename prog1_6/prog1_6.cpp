#include <iostream>
#define N 1000
using namespace std;

double eulero(double, int);
float fatt(int);

int main(){
    double r=1,ris;
    int n;
    cout<<"Fino a che numero?";
    cin>>n;    
    ris=eulero(r,n);
    cout<<"Costante Eulero: "<<ris;
}

double eulero(double r,int n){
    for (int i=1;i<n;i++){
        r=r+(1/fatt(i));
        }
    return r;
}

float fatt(int n){
    if(n<=0) return 1;
    else return n*fatt(n-1);
}