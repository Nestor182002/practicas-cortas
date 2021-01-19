#include<iostream>

using namespace std;

int main(){
           char empleado[15];
           float hora,ordina,extras,horastotal,neto,total,totalex,suma;
           int dias;
           double totaldeve,retencion;
           
           cout<<"nombre del empleado"<<endl;cin>>empleado;
           cout<<"cual es su sueldo por hora"<<endl;cin>>hora;
           cout<<"horas ordinarias"<<endl;cin>>ordina;
           cout<<"horas extras trabajadas"<<endl;cin>>extras;
           cout<<"dias trabajados"<<endl;cin>>dias;
           
           totalex=hora*extras;
           horastotal=hora*ordina;
           suma=totalex+horastotal;
           total=(suma*dias)/30;
              totaldeve=totalex*0.40;
                     totaldeve+=total;
              
           retencion=totaldeve*0.10;
              neto=totaldeve-retencion;
                    
           
           cout<<"nombre del empleado: "<<empleado<<endl;
           cout<<"sueldo por hora: "<<hora<<endl;
           cout<<"horas ordinarias: "<<ordina<<endl;
           cout<<"dias trabajados: "<<dias<<endl;
           cout<<"total horas extras: "<<totalex<<endl;
           cout<<"el devengando es: "<<totaldeve<<endl;
           cout<<"la retencion fue de: "<<retencion<<endl;
           cout<<"el salario neto a pagar: "<<neto<<endl;
           
           
    
    system("pause");
    }
