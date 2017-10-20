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
         int suma = ejercicio1();
         cout<<"Suma de los numeros primos: "<<suma<<endl; 
       }
     break;
     case 2:{
       int suma = ejercicio2();
       cout<<"La suma es de: "<<suma<<endl;
       }
     break;
     case 3:{
       ejercicio3();
       }
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
 cout<<"Ejercicio 1:"<<endl;
 cout<<"Ingrese un numero"<<endl;
 int suma = 0;
 int acum = 0;
 int NumI = 0;
 cin >> NumI;
 for(int i = 1; i < NumI; i++){
  acum = 0;
  for(int j = 2; j <= i; j++){
   if(i%j == 0){
    acum++; 
   }
   if(j == i && acum == 1){
    suma += j;
   }  
  } 
 }
 return suma; 
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
  cout<<"Ejercicio 3:"<<endl;
  int num = -1;
  while((num%2 != 0) && (num > 150 || num < 0)){
    cout<<"Ingrese un numero"<<endl;
    cin >> num;
  }
  bool comprobar1;
  bool comprobar2;
  for(int i = 1; i < 150; i++){
    for(int j = 1; j < 150; j++){
     comprobar1 = true;
     comprobar2 = true;
     if(j + i == num){
      for(int k = 2; k < i; i++){
       if(i%k == 0){
        comprobar1 = false;
       }
       for(int l = 2;l <j; j++){
        if(j%l == 0){
         comprobar2 = false;
        }  
       }
      }
      if(comprobar1 == true && comprobar2 == true && i < 151 && j < 151 && i > 0 && j > 0){
       cout<<"Los dos numeros primos que suman el numero ingresado son: "<< i <<" y "<< j<<endl;
      }
     }
   }  
  }
  return 0;
}

