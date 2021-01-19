#include<iostream>

using namespace std;

int main(){
    
    int infracciones=0,tempra,tarde,noche;
    char transito[15];
    
    cout<<"cual es su nombre"<<endl;cin>>transito;
    cout<<"cuantas infracciones reporta"<<endl;cin>>infracciones;
    
    
    tempra=infracciones*0.20;
    tarde=infracciones*0.35;
    noche=infracciones*0.45;
    
    cout<<"\t persona que registro: "<<transito<<endl;
    cout<<":::::::::::::::::::--::::::::::::::::"<<endl;
    cout<<"el promedio matutino es: "<<tempra<<endl;
     cout<<"el promedio vespertino es: "<<tarde<<endl;
      cout<<"el promedio nocturno es: "<<noche<<endl;
    
    
    
    system("pause");
    }
