#include <iostream>

using namespace std;
class materia{
public:
    int clave;
    string nombre;
    string profe;
    string libro;
materia(int c, string n, string p, string l){
    clave=c; nombre=n; profe=p;libro=l;
}
void imprime(){
cout<<"clave:"<<clave<<"\nnombre:"<<nombre<<"\nprofe"<<profe<<"\nlibro"<<libro;
};
void caca(){
cout<<"\ningresa nueva clave";
cin>>clave;
};
void capo(){
cout<<"\ningresa nueva profe";
cin>>profe;
};

};




int main(){

    int op,r,p=1;
    materia programacion(23552,"programacion","manuel","programacion para estudiantes");
    materia estructura(28346,"estructura de datos","pedro","estructuracion de datos");
    while(p==1){
    cout<<"que quieres hacer?\n";
    cout<<"imprimir datos=1, \ncambiar clave=2, \ncambiar profe=3, \nsalir =4";
    cin>>op;
    switch(op){
    case 1:
        cout<<"\n\nque materia?, \nprogramacion=1, estructura =2";
        cin>>r;
        if(r=1){ programacion.imprime();}
        else{estructura.imprime();}

        break;
    case 2:
        cout<<"\n\nque materia?, programacion=1, estructura =2";
        cin>>r;
        if(r=1){programacion.caca();}
        else{estructura.caca();}
        break;
    case 3:
        cout<<"\n\nque materia?, programacion=1, estructura =2";
        cin>>r;
        if(r=1){programacion.capo();}
        else{programacion.capo();}
        break;
        case 4: break;
        default:cout<<"\nno nseleccionaste ninguna";


} cout<<"\nquieres hacer otra cosa? si=1 no=2";cin>>p; }
    return 0;
}
