#include <iostream>

using namespace std;
void mostrarmenu();
void residuodivision();
void ejercicio2();
void ejercicio3();
int main()
{
    unsigned int opcion=1;
    while(opcion!=0){


mostrarmenu();
cout<<"Ingrese el numero correspondiente a la opcion de su preferencia: ";
cin>>opcion;

    switch(opcion){
    case 1:
        residuodivision();
    break;

    case 2:
        ejercicio2();

     break;
     case 3:
        ejercicio3();
     break;

     default:
     if(opcion!=0)
     cout<<"Opcion no valida"<<endl;
     break;


return 0;
}//Cierra Switch
}//Cierra while

    return 0;
}
//Funcion menú
void mostrarmenu(){
    cout<< "******* **Menu Practica 1** *********"<<endl;
    cout<<"Seleccione una opcion"<<endl;
    cout<< "1. Residuo de una division"<<endl;


}

void residuodivision(){
    unsigned int a, b, r;
    cout<< "Ingrese un numero: "<<endl;

    cin>>a;
    cout<< "Ingrese un numero: "<<endl;
    cin>>b;

    r=a%b;
 cout<<"El residuo de la operacion es: "<<a<<"/"<<b<<" es : "<<r<<endl;
}

void elevarapotencia(){
    int base, exponente = 1, operacion = 1;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>exponente;
    int x = exponente;
    int base1=base;
    for(int i=1;i<exponente+1;i++)
    {

        operacion = base*base1;
        base = operacion;
    }
    cout<<"La potencia es: "<<operacion<<endl;
}

void ejercicio2(){
    int valor, residuo, aux, ban = 0;
    cout<<"Ingrese el valor para el cual se desea calcular la cantidad de monedas o billetes que se deben usar"<<endl;cin>>valor;
    int cincuenta = 50000;
    int veinte = 20000;
    int diez = 10000;
    int cinco = 5000;
    int dos = 2000;
    int mil = 1000;
    int quinientos = 500;
    int doscientos = 200;
    int cien = 100;
    int cincuentap = 50;
    do{
            residuo = valor%cincuenta;
            cincuenta = valor/cincuenta;
            valor = residuo;
            cout<<cincuenta<<endl;
            cout<<residuo<<endl;
            residuo = valor%veinte;
            veinte = valor/veinte;
            valor = residuo;
            residuo = valor%diez;
            diez = valor/diez;
            valor = residuo;
            residuo = valor%cinco;
            cinco = valor/cinco;
            valor = residuo;
            residuo = valor%dos;
            dos = valor/dos;
            valor = residuo;
            residuo = valor%mil;
            mil = valor/mil;
            valor = residuo;
            residuo = valor%quinientos;
            quinientos = valor/quinientos;
            valor = residuo;
            residuo = valor%doscientos;
            doscientos = valor/doscientos;
            valor = residuo;
            residuo = valor%cien;
            cien = valor/cien;
            valor = residuo;{
            residuo = valor%cincuentap;
            cincuentap = valor/cincuentap;
            aux = residuo;
            cout<<"50000: "<<cincuenta<<endl;
            cout<<"20000: "<<veinte<<endl;
            cout<<"10000: "<<diez<<endl;
            cout<<"5000: "<<cinco<<endl;
            cout<<"2000: "<<dos<<endl;
            cout<<"1000: "<<mil<<endl;
            cout<<"500: "<<quinientos<<endl;
            cout<<"200: "<<doscientos<<endl;
            cout<<"100: "<<cien<<endl;
            cout<<"50: "<<cincuentap<<endl;
            cout<<"Residuo: "<<aux<<endl;
            }
        }while(ban = 0);
}

void ejercicio3(){
    int mes, dia = 0;
    cout<<"Ingrese un mes (1-12)"<<endl;
    cin>>mes;
    cout<<"Ingrese un día (1-31)"<<endl;
    cin>>dia;
    if(mes>0 & mes<13){
        if(dia<0 or dia>31){
            cout<<"Día invalido"<<endl;
        }

        if(dia>0 & dia <=30){
            if(mes==9 or mes==4 or mes==6 or mes==11){
                cout<<"La fecha "<<dia<<"/"<<mes<<" es valida";            }
                if(mes ==2 & dia>0 & dia<28){
                    cout<<"La fecha "<<dia<<"/"<<mes<<" es valida";
                }
                if(mes ==2 & dia==29){
                     cout<<"La fecha "<<dia<<"/"<<mes<<" es valida para un año visiesto";

                }
                if(dia>0 & dia<32 & mes>0 & mes<13){

                }
            cout<<"La fecha "<<dia<<"/"<<mes<<" es valida";
        }

    }else cout<<"Mes invalido, ingrese otro valor para mes"<<endl;
}
