#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    char nombre[30];
    int nota=0,numero=1,i=0,resultado=0,resultado2=0,resultado3=0;
      
    while(i<10){
    cout<<"nombre del estudiante: ";cin>>nombre;
    cout<<"calificacion: "<<numero<<endl;cin>>nota;
      i++;
      numero++;  
      if(nota<50){
      resultado++;
       }
      else if((nota>=50) && (nota<70)){
      resultado2++;        
      }
      else if((nota>80) && (nota<=100)){
           resultado3++;
           }     
    }
    cout<<"menores que 50 puntos es: "<<resultado<<endl;
    cout<<"mayor o igual a 50 pero menor a 70: "<<resultado2<<endl;
    cout<<"mayor a 80 o mas: "<<resultado3<<endl;
    system("pause");
}
