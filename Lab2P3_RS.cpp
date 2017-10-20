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
        }//fin switch
    }// fin while
}//fin main()

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
}//fin opciones()

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
        }//fin if comprueba la primaria
        if(j == i && acum == 1){
            suma += j;
        }  
    }//fin for j (comprueba la primaria)  
    }//fin for del numero ingresado
return suma; 
}//fin ejercicio1()

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
        }//fin if
    }//fin for
return suma;
}//Fin ejercicio2()

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
                for(int k = 1; k < i; i++){
                    if(i%k == 0 && k!= 1 && i!=k && i != 1){
                        comprobar1 = false;
                    }
                    for(int l = 1;l <j; j++){
                        if(j%l == 0 && l!= 1 && l!=j && j != 1){
                            comprobar2 = false;
                        }  
                    }
                }   
                if(comprobar1 == true && comprobar2 == true && i < 151 && j < 151 && i > 0 && j > 0){
       cout<<"Los dos numeros primos que suman el numero ingresado son: "<< i <<" y "<< j<<endl;
                }//Fin if de impresion de respuesta
            }//Fin if comprueba la suma
        }//fin for j  
    } // fin for i
return 0;
}//fin ejercicio3()

