#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char empleado[30];
    int hora,horaso,horasdi,horasno,horasdo;
    double totalo,totaldi,totalno,totaldo;
    double guardadi,guardano,guardado;
    
    cout<<"nombre del empleado"<<endl;cin>>empleado;
     cout<<"salario basico por hora"<<endl;cin>>hora;
      cout<<"horas ordinarias"<<endl;cin>>horaso;
       cout<<"horas extras diurnas"<<endl;cin>>horasdi;
       cout<<"horas extras nocturnas"<<endl;cin>>horasno;
       cout<<"horas extras dominicales"<<endl;cin>>horasdo;
       
       guardadi=(hora*horasdi)*0.25;
       totaldi=(hora*horasdi)+guardadi;
       cout<<"es"<<totaldi<<endl;
       
       return 0;
       system ("pause");
       }
