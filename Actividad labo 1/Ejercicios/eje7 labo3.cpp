#include <iostream>

using namespace std;

struct lostadatos{
    int numero;
    listdat*sgt;
    
};

void insertDat(listadat**Pinicio);
void impmenu(void);
void impdat(listadat*list);
void elimNum(listadat**list, int bus);:

int main (void){
    
        int opcion=0, buscar=0;
        listdat*pinicio = NULL;
        do{
            impmenu();
            cibn>>opci;
            
            switch (opci){
                case 1;
                insertDat(&pinicio);
                break;
                
                case 2;
                impdat(pinicio);
                break;
                
                case 3;
                
                cout<<"Ingrese el Numero que quiere eliminar";
                cin>>buscar;
                cout<<endl;
                elimNum(&pinicio, busca);
                break;
            }
        }while (opci !=80);
        
        return0;
}

void impmenu(void){
    cout << "MEnu"<< endl <<endl;
    cout<< "1-Introducir datos (Num, Enteros) .  .  ."<< endl;
    cout << "2-Mostrar List .  .  ."<<endl;
    cout<<"3-Borrar Numero deseado .  .  ."<<endl;
    cout<< "0-Salir:<<endl;

}
void insertDat(listdat**pinicio){
    
    listdat*new listdat;
    cout<<"ingrese un numero";
    cin>>new->nume;
    new->sgt = NULL;
    
    if(!=*pinicio)
    *pinicio= new;
    else{
        listdat*aux=*pinicio;
        while (aux-<sgt)
        aux = aux->sgt;
        
        aux->sgt =new;
    }
}
void impdat(listdat*List){
    if(!List)
    return 0;
    
    
    else{
        cout<<"numero:/t"<<List->num<<endl;
        impdat(List->sgt)
        
    }
    
}

void elimNum(listdat**num, int buscar){
    if(*list){
        *List=(*(*list)).sgt;
        elimNum(list, buscar);
        
    }
    else{
        elimNum(&(*(*list)).sgt,buscar);
    }
}
}



























