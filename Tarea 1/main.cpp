#include <iostream>

using namespace std;

class jefe{
//atributos
public:
  string clave;
  string nombre;
  string domicilio;
  string reporta;
  int sueldo;
  jefe(string c, string n, string d, string r, int s){
  clave=c; nombre=n; domicilio=d; sueldo=s;
  }

  void imprimir(){
  cout<<"clave:"<<clave<<"\nnombre:"<<nombre<<"\ndomicilio:"<<domicilio<<"\nsueldo:"<<sueldo<<"\nreporta:"<<reporta;
  }
  void cadom(){
  cout<<"Ingresa nuevo domicilio:";
  cin>>domicilio;

  }
  void carep(){
  cout<<"Ingresa nuevo reporte:";
  cin>>reporta;
  }
  void casu(){
  cout<<"Ingresa nuevo sueldo:";
  cin>>sueldo;
  }
};

int main(){
    int ep,es,op;
    string ap,bp,cp,dp,as,bs,cs,ds;

    cout<<"ingresa clave de jefe planta:";
    cin>>ap;
    cout<<"ingresa nombre de jefe planta:";
    cin>>bp;
    cout<<"ingresa domicilio de jefe planta:";
    cin>>cp;
     cout<<"ingresa reporte de jefe planta:";
    cin>>dp;
     cout<<"ingresa sueldo de jefe planta:";
    cin>>ep;

    cout<<"ingresa clave de jefe personal:";
    cin>>as;
    cout<<"ingresa nombre de jefe personal:";
    cin>>bs;
    cout<<"ingresa domicilio de jefe persona:";
    cin>>cs;
     cout<<"ingresa reporta de jefe personal:";
    cin>>ds;
     cout<<"ingresa sueldo de jefe personal:";
    cin>>es;

    jefe planta(ap,bp,cp,dp,ep);
    jefe personal(as,bs,cs,ds,es);
    int r=1;
    while(r=1){
    cout<<"Que es lo que quieres hacer?\n";
    cout<<"imprimir datos de un empleado=1\n";
    cout<<"actualizar domicilio de empleado=2\n";
    cout<<"actualizar reporte de empleado=3\n";
    cout<<"actualizar sueldo de empleado=4\n";
    cin>>op;
    switch(op){
        int x;
    case 1:
        cout<<"que empleado?\n";
        cout<<"jefe planta =1, jefe personal=2\n";
        cin>>x;
        if(x=1){
        planta.imprimir();
        }
        else{personal.imprimir();  }

        break;
    case 2:
        cout<<"que empleado?\n";
        cout<<"jefe planta =1, jefe personal=2\n";
        cin>>x;
        if(x=1){
        planta.cadom();planta.imprimir();
        }
        else{personal.cadom();  personal.imprimir();}

        break;
    case 3:
        cout<<"que empleado?\n";
        cout<<"jefe planta =1, jefe personal=2\n";
        cin>>x;
        if(x=1){
        planta.carep();planta.imprimir();
        }
        else{personal.carep(); personal.imprimir(); }

        break;
    case 4:
       cout<<"que empleado?\n";
        cout<<"jefe planta =1, jefe personal=2\n";
        cin>>x;
        if(x=1){
        planta.casu();planta.imprimir();
        }
        else{personal.casu(); personal.imprimir(); }

        break;
    }
    cout<<"quieres volver a repetir? si=1 no=2";
    cin>>r;
    }



    return 0;
}
