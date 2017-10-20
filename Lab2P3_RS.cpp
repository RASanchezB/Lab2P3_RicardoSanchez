#include <iostream>

using namespace std;

int opciones();
int ejercicio1();
int ejercicio2();
int ejercicio3();

int main(){
  int opcion;
  while(opcion != 4){
    opcion = opciones();
    switch(opcion){
     case 1:{
         
       }
     break;
     case 2:{}
     
     break;
     case 3:{}
     
     break;
     default:
     break;  
    }
  }
}

int opciones(){
  cout<<"_____MENU_____"<<endl
      <<"1) Ejercicio1"<<endl
      <<"2) Ejercicio2"<<endl
      <<"3) Ejercicio3"<<endl
      <<"4) Salir"<<endl
      <<"Ingrese el numero de la opcion que desea"<<endl;
  int opcion;
  cin >> opcion;
  return opcion;
}
int ejercicio1(){
  
}
