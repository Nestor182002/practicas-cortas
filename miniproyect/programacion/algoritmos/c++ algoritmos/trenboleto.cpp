#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    double distancia,preciokm=200,preciodistancia,descuento;
    long long boleto,totalboleto;
    int estancia;
           cout<<"distancia a recorrer? ";cin>>distancia;
           cout<<"dias de estancia? ";cin>>estancia;
           
           if((estancia>=7)&&(distancia>800)){
           preciodistancia=distancia*preciokm;
           boleto=estancia*preciodistancia;
           descuento=boleto*0.30;
           totalboleto=boleto-descuento;
           cout<<"el descuento que se hara es de: "<<descuento;
           cout<<"el precio del boleto es: "<<totalboleto<<endl;
           }
           else{
           preciodistancia=distancia*preciokm;
           boleto=estancia*preciodistancia;
           cout<<"el precio del boleto es: "<<boleto<<endl;
                }
          system("pause"); 
    }
