#include <iostream>
#include <cmath>
using namespace std;

    double functi(int n, double suma){
        if(n==0){
            
        return suma;
        }else{
            return suma+(((pow(-1, n+1))/((2*n)-1))+functi(n-1,suma));
    }
    }

 
int  main(){
    int numeral;
    cout<<"Ingrese un numero: ";
    cin>>numeral;
    cout<<4*functi(numeral,0);

    return 0;
}

