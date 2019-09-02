#include <iostream>

using namespace std;


int main()
{
    int LOL, menos, IN=0;
    cout<<"Ingrese un Numero:";
    cin>> LOL;
    while(LOL>0){
            menos = LOL%10;
            LOL=LOL/10;
            IN=IN*10+menos;
    }
    cout<<"El numero es:"<<IN;
    
    return 0;
    }