#include <iostream>

using namespace std;
//Declaracion de variables
int exe;
int n1;
int n2;
int n;
int main ()
{
   do{
     //Seleccionaremos la operacion a hacer
     cout<<"Ingrese el numero de la operacion que desea hacer"<<endl;
     cout<<"1) Suma 2) Resta 3) Multiplicacion 4) Finalizar"<<endl;
     cin>>exe;
        switch (exe) {
         case 1: 
             //Solicitaremos el primer dato
             cout<<"Ingrese su primero numero a operar"<<endl;
             cin>>n1;
             //Solicitaremos el segundo dato
             cout<<"Ingrese su segundo numero a operar"<<endl;
             cin>>n2;
             n= n1 + n2;
             cout<<"El resultado es: "<<n<<endl;
             break;
         case 2:
             //Solicitaremos el primer dato
             cout<<"Ingrese su primero numero a operar"<<endl;
             cin>>n1;
             //Solicitaremos el segundo dato
             cout<<"Ingrese su segundo numero a operar"<<endl;
             cin>>n2;
             n= n1 - n2;
             cout<<"El resultado es: "<<n<<endl;
             break;
         case 3: 
             //Solicitaremos el primer dato
             cout<<"Ingrese su primero numero a operar"<<endl;
             cin>>n1;
             //Solicitaremos el segundo dato
             cout<<"Ingrese su segundo numero a operar"<<endl;
             cin>>n2;
             n= n1 * n2;
             cout<<"El resultado es: "<<n<<endl;
             break;
        }
    }while(exe != 4);
    return 0;
}