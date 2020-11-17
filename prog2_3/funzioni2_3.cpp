#include <iostream>
using namespace std;
int charLen(char a[]);


//pulisce array da punteggiatura
char* cleanArray(char* array){
    unsigned int l=charLen(array),offset=0;
    char a[l];

    //copy array
    for (int i = 0; i < l; i++){
        a[i]=array[i];
    }    

    //popola array pulito
    for (int i = 0; i < l; i++){
        if(!ispunct(array[i]))
            array[i-offset]=a[i]; 
        else offset++; 
        array[i - offset] = '\0';
    }
    return array;   
}


//determina lunghezza array caratteri
int charLen(char a[]){
    int i;
    while(a[i]!='\0')
        i++;
    return i;    
}