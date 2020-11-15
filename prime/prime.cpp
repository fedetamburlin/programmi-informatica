#include <iostream>
using namespace std;
 int main() {
     int n;
     cout<< "inserire numero:";
     cin>>n;
          for(int i=2; i<n/2; i++){
         if(n%i==0){
             cout<<"non primo";
             return 0;
         }
    }
cout<<"numero primo";
return 0;
 }