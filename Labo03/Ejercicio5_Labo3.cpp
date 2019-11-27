#include <iostream>
using namespace std;

struct nodo{
    int dato;
    nodo *sgt;
};

class ListaSimple{
private:
    nodo *pInicio;
public:
    ListaSimple( void);
    void insAntes_1(int, int);
    void InsertiniLista(int);
    void MostLista(void);
    void MostListarecn(void);
    void MostListarec(nodo *);
    void MostListarecs(void);
    void MostListarecs(nodo *);
};
ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}
void ListaSimple::MostLista(void) {
    nodo *s = pInicio;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sgt;
    }
}
void ListaSimple::insAntes_1(int dato, int datoRef) {
    nodo *nuevo, *p, *q;

    nuevo = new nodo;
    nuevo->dato = dato;

    p = pInicio;
    q = NULL;
    while (p != NULL && p->dato != datoRef) {
        q = p;
        p = p->sgt;
    }
    if (q == NULL) {
        if (p == NULL) {
            cout << "Insertaste el primero" << endl;
            pInicio = nuevo;
            pInicio->sgt = NULL;
        } else {
            cout << "Dato de referencia esta al principio" << endl;
            pInicio = nuevo;
            pInicio->sgt = p;
        }
    } else {
        if (p == NULL) {
            cout << "Dato de referencia no encontrado" << endl;
            q->sgt = nuevo;
            nuevo->sgt = NULL;
        } else {
            cout << "Dato insertado a mitad de la lista" << endl;
            q->sgt = nuevo;
            nuevo->sgt = p;
        }
    }
}
int ListaSimple::MostListarec(void) {
    MostListarec(pInicio);
}

void ListaSimple::MostListarec(nodo *s) {
    if (s != NULL) {
        MostListarec(s->sgt);
        cout << s->dato << " ";
    }
}

void ListaSimple::MostListarecs(void) {
    MostListarecs(pInicio);
}

void ListaSimple::MostListarecs(nodo *s) {
    if (s != NULL) {
        cout << s->dato << " ";
        MostListarecs(s->sgt);
    }
}
int main(void)
{
   int ListaSimple miLista;
    char resp;
    int dato, datoRef;

    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        cout << "Antes de cual vas a insertarlo? ";
        cin >> datoRef;
        miLista.insAntes_1(dato, datoRef);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }
     cout << "\nMostrar lista iterativo (sentido directo):" << endl;
    miLista.MostLista();
    cout << "\nMostrar lista recursivo (sentido inverso):" << endl;
    miLista.MostListarec();
    cout << "\nMostrar lista recursivo (sentido directo):" << endl;
    miLista.MostListarecs();

    return 0;
}
