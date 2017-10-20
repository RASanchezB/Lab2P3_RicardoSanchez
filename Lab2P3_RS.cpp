#include <iostream>

using namespace std;

int opciones();
int ejercicio1();
int ejercicio2();
int ejercicio3();

int main(){
  int opcion = 0;
  while(opcion != 4){
    opcion = opciones();
    switch(opcion){
     case 1:{
          
       }
     break;
     case 2:{
       int suma = ejercicio2();
       cout<<"La suma es de: "<<suma<<endl;
       }
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
int ejercicio2(){
  cout<<"Ejercicio 2:"<<endl;
  cout<<"Ingrese el primer numero"<<endl;
  int a;
  cin >> a;
  cout<<"Ingrese el segundo numero"<<endl;
  int b;
  cin >> b;
  cout<<"Ingrese el tercer numero"<<endl;
  int n;
  cin >> n;
  int suma = 0;
  for(int i = 1; i <= n; i++){
    if(i%a == 0 && i%b == 0){
      suma = suma + i;
    }
  }
  return suma;
}
int ejercicio3(){
  
  }
