#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    
    char nombre,sexo;
    int edad;
    
    cout<<"digite su nombre"<<endl;
    cin>>nombre;
    cout<<"digite su sexo"<<endl;
    cin>>sexo;
    cout<<"digite su edad"<<endl;
     cin>>edad;
    
    cout<<"nombre: "<<nombre<<endl;
    cout<<"sexo: "<<sexo<<endl;
    
    if(edad>60 && edad<80){
               cout<<"puede ser beneficiado"<<endl;
               }
               else{
                    cout<<"su edad no corresponde a los requisitos"<<endl;
                    }
                    
                    return 0;
                    system("pause");
                    getch();
    
    }
