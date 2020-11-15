#include <iostream>
using namespace std;

int fatt(int);
int fatt1(int);

int main(){
    int n,r;
    cout<<"Che fattoriale?";
    cin>>n;
    r=fatt(n);
    cout<<"Fattoriale del numero: "<<r;
}

int fatt(int n){
    if(n<=0) return 1;
    else return n*fatt(n-1);
}

int fatt1(int n){
    int r=1;
    for (int i=1;i<=n;i++)
        r*=i;
    return r;
}