#include <iostream>
using namespace std;

int* popolaArray(int, int*,int);
int ncifre(int);

int main(){
    int n,cifra;
    
    cout<<"Inserire numero:";
    cin>>n;
    cout<<"Inserire cifra(da dx):";
    cin>>cifra;
    
    int nc=ncifre(n);
    int a[nc];
    int* array=popolaArray(n,a,nc);

    cout<<"Cifra: "<<array[cifra-1];

    /*for (int i=0;i<nc;i++){
        cout<<array[i]<<", ";
    }*/

}

int* popolaArray(int n, int*a, int nc){
    for (int i=0;i<nc;i++){
        a[i]=n%10;
        n=n/10;                    
    }
    return a;
}

int ncifre(int n){
    int i=1;
    while(n>10){
        n=n/10;
        i++;        
    }
    return i;
};