#include <iostream>

using namespace std;

int main(void){
    int NUMERO[10];
    int k=0;
    do{
        cout<<"Ingrese el Numero de valor "<<k+1<<" : "; cin>>NUMERO[k];
        k++;
    }
    while(k<10);
    int j=0, contando=0;
    do{
        cout<<endl;
        cout<<"Valor"<<j+1<<"Es:"<<NUMERO[j];
        contando=contando+NUMERO[j];
        j++;
    }
    while(j<10);
    cout<<endl;
    cout<<"Lo sumado es:"<<contando<<endl;
    cout<<"El promedio:"<<contando/10<<endl;
    return 0;
}

