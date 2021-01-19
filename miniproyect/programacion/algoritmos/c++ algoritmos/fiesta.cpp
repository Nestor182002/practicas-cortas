#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int hombres,mujeres,personas,i=0,totalh,totalm,acumh=0,acum=0,j=0,promedioh,promediom;
        
        cout<<"hombres habian "<<endl;cin>>hombres;
        cout<<"mujeres "<<endl;cin>>mujeres;
        
        while(i<hombres){
        cout<<"si ingresa una edad menor a 18 se cerrara automaticamente"<<endl;
        cout<<"digite la edad del hombre: ";cin>>totalh;
        i++;
        acumh+=totalh;
        
            if((totalh<18)&&(totalh==0)){
            exit(-1);
            }        
        }
        
         while(j<mujeres){
        cout<<"si ingresa una edad menor a 18 se cerrara automaticamente"<<endl;
        cout<<"digite la edad de la mujer: ";cin>>totalm;
        j++;
        acum+=totalm;
            if((totalm<18)&&(totalm==0)){
            exit(-1);
            }      
        }
        
        personas=hombres+mujeres;
       cout<<"asistieron: "<<personas<<endl;
       
       cout<<"hombres habian: "<<hombres<<" mujeres: "<<mujeres<<endl;
        
        promedioh=acumh/hombres;
       cout<<"promedio de edad de hombres: "<<promedioh<<endl;
       
       promediom=acum/mujeres;
       cout<<"promedio de edad de mujeres: "<<promediom<<endl;
        
    
    system("pause");
    }
