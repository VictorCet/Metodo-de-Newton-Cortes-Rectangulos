#include <iostream>	
#include <iomanip>
#include <math.h>
#include <Funcion.hpp>
#include <IntegracionRectangulos.hpp> 
using namespace std;


int main() {
    Funcion funcion;
    IntegracionRectangulos integracion;

    double a; // Limite inferior de integracion
    double b; // Limite superior de integracion
    int n, fix;    // Subintervalos  //Digitos despues de punto decimal
    
    cout<<"Metodo de Rectangulos con funcion f(x)="<<endl<<"Ingresa el valor de a (limite inferior)"<<endl;
    cin>>a;
    cout<<"Ingresa el valor de b  (limite superior)"<<endl;
    cin>>b;
    cout<<"Ingresa el valor de los subintervalos"<<endl;
    cin>>n;
    cout<<"Ingresa la precision despues del punto decimal"<<endl;
    cin>>fix;

    float resultado = integracion.integrar(funcion, a, b, n);

    cout << "El resultado de la integracion es: " <<fixed<<setprecision(fix)<< resultado <<endl; //agrega el fix deseado por el usuario
    

    return 0;
}

