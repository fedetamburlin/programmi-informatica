#include <iostream>

#include <string.h>
#include <math.h>
using namespace std;

enum a {F,C};

//creo struttura per valori in input
struct valori
    {
        int gradi;
        a tipo;
    };

int main(){
    
    const char input[]="20C@34F@12F@23C"; 
    unsigned int len= strlen(input);

    valori misure[15]; //array misure (ex 20F, 40C,...)
    
    int j; //posizione array misure struct
    
    for (int i = 0; i < len; i++)
    {

        char memN[15]; //buffer
        int count=0; //posizione nel buffer        
        
        //creo dei nuclei di numero e unità di misura
        while(input[i]!='@' && i<=len){
            memN[count]=input[i];
            count++;
            i++;
        }
        //converto i nuclei in elementi della struttura
        if(memN[count]=='F')
            misure[j].tipo=F;
        else if (memN[count]=='C')
            misure[j].tipo=C;
        
        count--;
        
        int num=0;
        for (int t = count; t >= 0; t--){
            num+=(int(memN[t])*pow(10,count-t));            
        }
        cout<<"num"<<num;
        misure[j].gradi=num;
        j++;
        i++;
        
    }
    cout<<misure[0].gradi;

    return 0;
    
}