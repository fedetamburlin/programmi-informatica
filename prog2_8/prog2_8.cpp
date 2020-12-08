#include <iostream>
using namespace std;

int main(int argc, char*argv[]){
    if (argc != 11)
    {
        cerr<<"Wrong number of inputs. Use 10 numbers"<<endl;
        return -1;
    }

    int marker;
    int numbers[10];
    
    //conversions    
    for (int i = 0; i <= 10; i++)
    {
        numbers[i]=atoi(argv[i+1]);

        //finder
        if (numbers[i]>marker)
        {
            marker=numbers[i];
        }
    }    
    
    cout<<"The biggest number insert is: "<<marker<<endl;
    
    return 0;

}