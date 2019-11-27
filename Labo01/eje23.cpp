#include <iostream>

using namespace std;


    struct complejo {
        int R;
        int imag;
    };
    
    int main()
    {
        complejo p1, p2, suma;
            
            cout<< "Coloque el valor de A y B donde A + 1B sera el primer numero Complejo\n";
            cin >> p1.R >> p1. imag;
            
            
            cout<< "Coloque el valor de A y B donde A + 1B Sera el segundo numero Complejo\n";
            cin >>  p2.R>> p2.imag;
            
            suma.R = p1.R + p2.R;
            suma.imag = p1.imag + p2.imag;
    
                if(suma.imag >=0)
                cout<<suma.R<< " + " <<suma.imag<<"i";
                
                else
                cout<<suma.R << " - " <<suma.imag<<"i";
                
                return 0;
    }
                
        
        
    


