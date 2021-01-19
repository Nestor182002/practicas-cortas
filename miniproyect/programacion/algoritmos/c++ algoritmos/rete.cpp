#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char empleado[30];
    int hora,horaso,horasdi,horasno,horasdo,dias,horastraba;
    double totalo,totaldi,totalno,totaldo,totalextras,totalordi;
    double guardadi,guardano,guardado,retencion,totaltraba,totaldeve;
    float valordi,valorno,valordo,suma;
    
    cout<<"nombre del empleado"<<endl;cin>>empleado;
     cout<<"salario basico por hora"<<endl;cin>>hora;
     cout<<"horas trabajadas por dia"<<endl;cin>>horastraba;
     cout<<"dias trabajados"<<endl;cin>>dias;
      cout<<"horas ordinarias"<<endl;cin>>horaso;
      cout<<"valor horas extras diurnas"<<endl;cin>>valordi;
       cout<<"valor horas extras nocturnas"<<endl;cin>>valorno;
       cout<<"valor horas extras dominicales"<<endl;cin>>valordo;
       cout<<"horas extras diurnas"<<endl;cin>>horasdi;
       cout<<"horas extras nocturnas"<<endl;cin>>horasno;
       cout<<"horas extras dominicales"<<endl;cin>>horasdo;
         
       guardadi=(valordi*horasdi)*0.25;//sacando las extras diurna
       totaldi=(valordi*horasdi)+guardadi;
       
       guardano=(valorno*horasno)*0.5;//sacando las extras nocturnas
       totalno=(valorno*horasno)+guardano;
       
       guardado=(valordo*horasdo)*0.75;//sacando las extras dominicales
       totaldo=(valordo*horasdo)+guardado;
       
      totalordi=hora*horaso;//sacando las horas ordinario        
       totalextras=(totaldi+totalno+totaldo);//total extras
       suma=totalordi+totalextras;//ordinario y extras sumadas
       totaltraba=(hora*horastraba)*dias;//sueldo total
       
       retencion=totalextras*0.10;//retencion a las extras
       totaldeve=(suma+totaltraba)-retencion;//devegando menos la retencion
       
       
       cout<<"el empleado es: "<<empleado<<endl;//resultados
       cout<<"el salario total es: "<<totaldeve<<endl;
       cout<<"la retencion en la fuente es: "<<retencion<<endl;
       cout<<"horas diurnas: "<<totaldi<<endl;
        cout<<"horas nocturnas: "<<totalno<<endl;
         cout<<"horas dominicales: "<<totaldo<<endl;
         cout<<"total ordinaria: "<<totalordi<<endl;
       
     
       system ("pause");
       
       }
